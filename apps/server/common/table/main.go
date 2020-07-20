package table

import (
	"fmt"

	"github.com/spf13/viper"
	"github.com/tosone/logging"
	"gorm.io/driver/mysql"
	"gorm.io/driver/postgres"
	"gorm.io/driver/sqlite"
	"gorm.io/gorm"
)

var engine *gorm.DB

func Initialize() (err error) {
	//var dialString string
	var engineType = viper.GetString("Database.Engine")
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

	if engine, err = gorm.Open(dialector, &gorm.Config{}); err != nil {
		logging.Error(err.Error())
		return
	}

	if err = engine.AutoMigrate(
		new(Question),
		new(QuestionInfo),
	); err != nil {
		logging.Panic(err.Error())
	}
	return
}
