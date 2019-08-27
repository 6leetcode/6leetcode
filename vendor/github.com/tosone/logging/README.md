# logging [![Build Status](https://travis-ci.org/tosone/logging.svg?branch=master)](https://travis-ci.org/tosone/logging) [![Coverage Status](https://coveralls.io/repos/github/tosone/logging/badge.svg?branch=master)](https://coveralls.io/github/tosone/logging?branch=master)

Example Code:
``` go
package main

import "github.com/tosone/logging"

type Test struct {
	String string
	Int    int
}

func main() {
	var test = Test{String: "123123123", Int: 1}
	logging.Info("info level")
	logging.WithFields(logging.Fields{"field1": 1, "field2": "123"}).Info("info level")
	logging.Warn("warn info")
	logging.WithFields(logging.Fields{"field1": 1, "field2": "123"}).Warn("warn level")
	logging.Debug(test)
	logging.Debugf("%+v", test)
}
```

OutPut:
```
INFO[10:39:49.100] info level                                file=main.go line=12
INFO[10:39:49.101] info level                                file=main.go line=13 field1=1 field2=123
WARN[10:39:49.101] warn info                                 file=main.go line=14
WARN[10:39:49.101] warn level                                file=main.go line=15 field1=1 field2=123
DEBU[10:39:49.101] {123123123 1}                             file=main.go line=16
DEBU[10:39:49.101] {String:123123123, Int:1}                 file=main.go line=17
```
