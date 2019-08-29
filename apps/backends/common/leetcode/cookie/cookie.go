package cookie

import (
	"fmt"
	"strings"
)

type Cookie map[string]string

func Parse(str string) (cookie Cookie) {
	cookie = make(map[string]string)
	var list = strings.Split(str, "; ")
	for _, s := range list {
		var l = strings.Split(s, "=")
		if len(l) != 2 {
			continue
		}
		cookie[l[0]] = l[1]
	}
	return
}

func (c Cookie) String() (str string) {
	for k, v := range c {
		str += fmt.Sprintf("%s=%s; ", k, v)
	}
	str = str[0 : len(str)-2]
	return
}
