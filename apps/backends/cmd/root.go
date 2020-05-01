package cmd

import (
	"fmt"

	"github.com/spf13/cobra"
	"github.com/spf13/viper"
	"github.com/tosone/logging"
	"github.com/unknwon/com"

	"github.com/6leetcode/6leetcode/apps/backends/cmd/crawler"
	"github.com/6leetcode/6leetcode/apps/backends/cmd/server"
	"github.com/6leetcode/6leetcode/apps/backends/cmd/version"
	"github.com/6leetcode/6leetcode/apps/backends/common/table"
)

func init() {
	var config string

	var serverCmd = &cobra.Command{
		Use:   "server",
		Short: "Restful API server for leetcode problems info.",
		Long:  `Restful API server for leetcode problems info.`,
		Args:  cobra.MinimumNArgs(0),
		Run: func(_ *cobra.Command, _ []string) {
			var err error
			if err = table.Initialize(); err != nil {
				fmt.Printf("Got error: %+v\n", err)
				return
			}
			if err = server.Initialize(); err != nil {
				fmt.Printf("Got error: %+v\n", err)
			}
		},
	}

	serverCmd.PersistentFlags().StringVarP(&config, "config", "c", "./config.yml", "config file")

	RootCmd.AddCommand(serverCmd) // server commander

	var crawlerCmd = &cobra.Command{
		Use:   "crawler",
		Short: "Travel all of the leetcode problems info.",
		Long:  `Travel all of the leetcode problems info.`,
		Args:  cobra.MinimumNArgs(0),
		Run: func(_ *cobra.Command, _ []string) {
			var err error
			if err = table.Initialize(); err != nil {
				fmt.Printf("Got error: %+v\n", err)
				return
			}
			if err = crawler.Initialize(); err != nil {
				fmt.Printf("Got error: %+v\n", err)
			}
		},
	}

	RootCmd.AddCommand(crawlerCmd) // crawler commander

	var versionCmd = &cobra.Command{
		Use:   "version",
		Short: "Get version",
		Long:  `The version that build detail information.`,
		Run: func(_ *cobra.Command, _ []string) {
			version.Initialize()
		},
	}

	RootCmd.AddCommand(versionCmd) // version commander

	viper.SetConfigType("yaml")
	if com.IsFile(config) {
		viper.SetConfigFile(config)
	} else {
		logging.Fatal("Cannot find config file. Please check.")
	}
	if err := viper.ReadInConfig(); err != nil {
		logging.Panic("Cannot find the specified config file.")
	}

	RootCmd.Use = viper.GetString("AppName")

	viper.SetDefault("author", "Tosone <i@tosone.cn>")
	viper.SetDefault("license", "MIT")
}

// RootCmd represents the base command when called without any sub commands
var RootCmd = &cobra.Command{
	Short: "Leetcode tool.",
	Long:  `Leetcode tool.`,
}
