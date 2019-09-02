package server

import "fmt"

var errCode = map[int]error{
	200:  fmt.Errorf("ok"),
	1001: fmt.Errorf("database error"),
	1002: fmt.Errorf("server internal error"),
	1003: fmt.Errorf("param error"),
}
