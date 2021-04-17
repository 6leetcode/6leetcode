package main

import (
	"github.com/tosone/logging"

	"leet/cmd"
)

func main() {
	// init cobra commander
	if err := cmd.RootCmd.Execute(); err != nil {
		logging.Panic(err.Error())
	}
}
