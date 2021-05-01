package main

import (
	"github.com/tosone/logging"

	"leet/cmd"
)

func main() {
	if err := cmd.RootCmd.Execute(); err != nil {
		logging.Panic(err.Error())
	}
}
