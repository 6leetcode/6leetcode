package table

import (
	"fmt"
	"log"
	"os"
	"time"

	"github.com/spf13/viper"
	"github.com/tosone/logging"
	"gorm.io/driver/mysql"
	"gorm.io/driver/postgres"
	"gorm.io/driver/sqlite"
	"gorm.io/gorm"
	"gorm.io/gorm/logger"
)

var engine *gorm.DB

// Initialize initialize
func Initialize() (err error) {
	var engineType = viper.GetString("Database.Engine")
	if engineType == "" {
		engineType = "sqlite3"
		viper.SetDefault("Database.Path", "6leetcode.db")
	}
	var dialector gorm.Dialector
	if engineType == "sqlite3" {
		dialector = sqlite.Open(viper.GetString("Database.Path") + "?_busy_timeout=10000&_txlock=immediate")
	} else if engineType == "mysql" {
		dialector = mysql.Open(fmt.Sprintf("%s:%s@tcp(%s:%s)/%s",
			viper.GetString("Database.Username"),
			viper.GetString("Database.Password"),
			viper.GetString("Database.Host"),
			viper.GetString("Database.Port"),
			viper.GetString("Database.Database"),
		))
	} else if engineType == "postgres" {
		dialector = postgres.Open(fmt.Sprintf("user=%s password=%s host=%s dbname=%s port=%s sslmode=%s TimeZone=Asia/Shanghai",
			viper.GetString("Database.Username"),
			viper.GetString("Database.Password"),
			viper.GetString("Database.Host"),
			viper.GetString("Database.Database"),
			viper.GetString("Database.Port"),
			viper.GetString("Database.SSLMode"),
		))
	} else {
		logging.Fatal(fmt.Sprintf("Not support this database: %s", engineType))
	}

	var newLogger = logger.New(
		log.New(os.Stdout, "\r\n", log.LstdFlags),
		logger.Config{
			SlowThreshold: 500 * time.Millisecond,
			LogLevel:      logger.Silent,
			Colorful:      true,
		},
	)
	if engine, err = gorm.Open(dialector, &gorm.Config{Logger: newLogger}); err != nil {
		logging.Error(err.Error())
		return
	}

	if err = engine.AutoMigrate(
		new(Question),
	); err != nil {
		logging.Panic(err.Error())
	}
	return
}
