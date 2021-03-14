package table

import (
	"log"
	"os"
	"time"

	"github.com/spf13/viper"
	"github.com/tosone/logging"
	"gorm.io/driver/sqlite"
	"gorm.io/gorm"
	"gorm.io/gorm/logger"
)

var engine *gorm.DB

// Initialize initialize
func Initialize() (err error) {
	viper.SetDefault("DatabaseFile", "6leetcode.db")

	var dialector = sqlite.Open(viper.GetString("DatabaseFile") + "?_busy_timeout=10000&_txlock=immediate")

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
		new(Solution),
	); err != nil {
		logging.Panic(err.Error())
	}
	return
}
