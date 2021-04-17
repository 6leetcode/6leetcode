package version

import (
	"fmt"
	"runtime"
)

// Version version
var Version = "no provided"

// BuildStamp BuildStamp
var BuildStamp = "no provided"

// GitHash GitHash
var GitHash = "no provided"

// Initialize version command entry
func Initialize() {
	fmt.Printf("%s %s/%s %s\n", "6leetcode", runtime.GOOS, runtime.GOARCH, runtime.Version())
	fmt.Printf("Version: %s\n", Version)
	fmt.Printf("BuildDate: %s\n", BuildStamp)
	fmt.Printf("BuildHash: %s\n", GitHash)
}
