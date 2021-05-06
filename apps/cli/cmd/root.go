package cmd

import (
	"os"

	"github.com/spf13/cobra"
	"github.com/spf13/viper"
	"github.com/tosone/logging"
	"github.com/unknwon/com"

	"leet/cmd/crawler"
	"leet/cmd/jsongen"
	"leet/cmd/readme"
	"leet/cmd/solutiongen"
	"leet/cmd/version"
	"leet/common/table"
)

// RootCmd represents the base command when called without any sub commands
var RootCmd = &cobra.Command{
	Short: "Leetcode tool",
	Long:  `Leetcode tool.`,
}

const DefaultConfig = "/etc/leet/config.yml"

var config string

func init() {
	RootCmd.PersistentFlags().StringVarP(&config, "config", "c", "./config.yml", "config file")

	var allCmd = &cobra.Command{
		Use:   "all",
		Short: "Travel all of the leetcode problems info",
		Long:  `Travel all of the leetcode problems info.`,
		Args:  cobra.MinimumNArgs(0),
		RunE: func(_ *cobra.Command, _ []string) (err error) {
			if err = initTable(); err != nil {
				logging.Errorf("Init table with error: %+v", err)
				return
			}
			if err = crawler.Initialize(); err != nil {
				logging.Errorf("Init crawler with error: %+v", err)
				return
			}
			if err = readme.Initialize(); err != nil {
				logging.Errorf("Got error: %+v", err)
				return
			}
			if err = jsongen.Initialize(); err != nil {
				logging.Errorf("Init crawler with error: %+v", err)
				return
			}
			return
		},
	}
	RootCmd.AddCommand(allCmd) // crawler commander

	var genCmd = &cobra.Command{
		Use:   "gen",
		Short: "Generate README.md, Makefile and solution",
		Long:  `Generate README.md, Makefile and solution`,
		Args:  cobra.MinimumNArgs(0),
		RunE: func(_ *cobra.Command, _ []string) (err error) {
			if err = initTable(); err != nil {
				logging.Errorf("Init table with error: %+v", err)
				return
			}
			if err = readme.Initialize(); err != nil {
				return
			}
			if err = solutiongen.Initialize(); err != nil {
				return
			}
			if err = jsongen.Initialize(); err != nil {
				logging.Errorf("Init crawler with error: %+v", err)
				return
			}
			return
		},
	}
	RootCmd.AddCommand(genCmd)

	var versionCmd = &cobra.Command{
		Use:   "version",
		Short: "Get version",
		Long:  `The version that build detail information.`,
		Run: func(_ *cobra.Command, _ []string) {
			version.Initialize()
		},
	}
	RootCmd.AddCommand(versionCmd) // version commander

	RootCmd.Use = "6leetcode"

	cobra.OnInitialize(initConfig)
}

func initTable() (err error) {
	if err = table.Initialize(); err != nil {
		logging.Errorf("Got error: %+v", err)
		return
	}
	return
}

func initConfig() {
	viper.AutomaticEnv()
	viper.SetConfigType("yaml")
	if com.IsFile(config) {
		viper.SetConfigFile(config)
	} else if config == "./config.yml" && com.IsFile(DefaultConfig) {
		viper.SetConfigFile(DefaultConfig)
	}
	if err := viper.ReadInConfig(); err != nil {
		logging.Warn("Cannot find the specified config file.")
	}

	if os.Getenv("Username") != "" {
		viper.Set("Username", os.Getenv("Username"))
	}
	if os.Getenv("Password") != "" {
		viper.Set("Password", os.Getenv("Password"))
	}
	if os.Getenv("Public") != "" {
		viper.Set("Public", os.Getenv("Public"))
	}

	viper.SetDefault("QuestionDir", "questions")
	viper.SetDefault("Public", "apps/web/public/db")
}
