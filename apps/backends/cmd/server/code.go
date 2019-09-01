package server

import "fmt"

var errCode = map[int]error{
	200:  fmt.Errorf("ok"),
	1001: fmt.Errorf("database error"),
}
