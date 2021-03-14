package main

import (
	"github.com/tosone/logging"

	"6leetcode/cmd"
	"6leetcode/cmd/version"
)

// Version version command output msg
var Version = "no provided"

// BuildStamp version command output msg
var BuildStamp = "no provided"

// GitHash version command output msg
var GitHash = "no provided"

func main() {
	// set version command output
	version.Setting(Version, BuildStamp, GitHash)

	// init cobra commander
	if err := cmd.RootCmd.Execute(); err != nil {
		logging.Panic(err.Error())
	}
}
