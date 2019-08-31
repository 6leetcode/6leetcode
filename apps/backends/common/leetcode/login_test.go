package leetcode

import (
	"fmt"
	"testing"

	"github.com/spf13/viper"
)

func TestLogin(t *testing.T) {
	var instance = New()
	viper.Set("Login.Name", "tosone@qq.com")
	viper.Set("Login.Password", "wC6JW9ra4z2Gfqe")
	instance.Login()

	if err := instance.All(); err != nil {
		fmt.Println(err)
	}
	// instance.Question("two-sum")
}
