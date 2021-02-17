package main

import (
	"embed"

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

//go:embed questions
var questions embed.FS

//go:generate swag init
// @title 6leetcode API
// @version 1.0
// @description 6leetcode API get question and solutions.

// @host 6leetcode.com
// @BasePath /api
func main() {
	// set version command output
	version.Setting(Version, BuildStamp, GitHash)

	cmd.Questions = questions

	// init cobra commander
	if err := cmd.RootCmd.Execute(); err != nil {
		logging.Panic(err.Error())
	}
}
