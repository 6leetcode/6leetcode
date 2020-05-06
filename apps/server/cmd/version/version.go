package version

import (
	"fmt"
	"runtime"

	"github.com/spf13/viper"
)

// Version version
var Version = "no provided"

// BuildStamp BuildStamp
var BuildStamp = "no provided"

// GitHash GitHash
var GitHash = "no provided"

// Setting get the version command output msg
func Setting(version, buildStamp, gitHash string) {
	Version = version
	BuildStamp = buildStamp
	GitHash = gitHash
}

// Initialize version command entry
func Initialize() {
	fmt.Printf("%s %s/%s %s\n", viper.GetString("AppName"), runtime.GOOS, runtime.GOARCH, runtime.Version())
	fmt.Printf("Version: %s\n", Version)
	fmt.Printf("BuildDate: %s\n", BuildStamp)
	fmt.Printf("BuildHash: %s\n", GitHash)
}
