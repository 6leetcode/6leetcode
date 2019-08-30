package leetcode

import (
	"testing"
)

func TestNew(t *testing.T) {
	var instance, err = New()
	if err != nil {
		t.Error("Got an error")
	}
	instance.UserName = "itosone"
	instance.Password = "8541539655a"
	instance.Login()
}
