package logging

import (
	"crypto/rand"
	"testing"
)

func TestInfo(t *testing.T) {
	Info("info level")
	WithFields(Fields{"test": "test"}).Info("info level")
	Infof("info level")
	Infof("info level: %d", 1)
	WithFields(Fields{"test": "test"}).Infof("info level")
	WithFields(Fields{"test": "test"}).Infof("info level: %d", 1)
}

func TestDebug(t *testing.T) {
	Debug("debug level")
	WithFields(Fields{"test": "test"}).Debug("debug level")
	Debugf("debug level")
	Debugf("debug level: %d", 1)
	WithFields(Fields{"test": "test"}).Debugf("debug level")
	WithFields(Fields{"test": "test"}).Debugf("debug level: %d", 1)
}

func TestWarn(t *testing.T) {
	Warn("warn level")
	WithFields(Fields{"test": "test"}).Warn("warn level")
	Warnf("warn level")
	Warnf("warn level: %d", 1)
	WithFields(Fields{"test": "test"}).Warnf("warn level")
	WithFields(Fields{"test": "test"}).Warnf("warn level: %d", 1)
}

func TestError(t *testing.T) {
	Error("error level")
	WithFields(Fields{"test": "test"}).Warn("error level")
	Errorf("error level")
	Errorf("error level: %d", 1)
	WithFields(Fields{"test": "test"}).Errorf("error level")
	WithFields(Fields{"test": "test"}).Errorf("error level: %d", 1)
}

func TestFatal(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("The code did not panic")
		}
	}()
	Fatal("fatal level")
}

func TestFatal1(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("The code did not panic")
		}
	}()
	WithFields(Fields{"test": "test"}).Fatal("fatal level")
}

func TestFatalf(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("The code did not panic")
		}
	}()
	Fatalf("fatal level")
}

func TestFatalf1(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("The code did not panic")
		}
	}()
	Fatalf("fatal level: %d", 1)
}

func TestFatalf2(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("The code did not panic")
		}
	}()
	WithFields(Fields{"test": "test"}).Fatalf("fatal level")
}

func TestFatalf3(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("The code did not panic")
		}
	}()
	WithFields(Fields{"test": "test"}).Fatalf("fatal level: %d", 1)
}

func TestUnknownLevel(t *testing.T) {
	var level uint = 10
	t.Log(Level(level).String())
}

func TestPanic(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("The code did not panic")
		}
	}()
	Panic("panic level")
}

func TestPanic1(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("The code did not panic")
		}
	}()
	WithFields(Fields{"test": "test"}).Panic("panic level")
}

func TestPanicf(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("The code did not panic")
		}
	}()
	Panicf("panic level")
}

func TestPanicf1(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("The code did not panic")
		}
	}()
	Panicf("panic level: %d", 1)
}

func TestPanicf2(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("The code did not panic")
		}
	}()
	WithFields(Fields{"test": "test"}).Panicf("panic level")
}

func TestPanicf3(t *testing.T) {
	defer func() {
		if r := recover(); r == nil {
			t.Errorf("The code did not panic")
		}
	}()
	WithFields(Fields{"test": "test"}).Panicf("panic level: %d", 1)
}

func TestLevel_String(t *testing.T) {
	var level Level
	level = DebugLevel
	t.Log(level.String())
	level = InfoLevel
	t.Log(level.String())
	level = WarnLevel
	t.Log(level.String())
	level = ErrorLevel
	t.Log(level.String())
	level = FatalLevel
	t.Log(level.String())
	level = PanicLevel
	t.Log(level.String())
}

func TestFileCannotBeWrite(t *testing.T) {
	var gb = 1024 * 1024
	var maxSize = 1
	var conf = Config{
		LogLevel:   DebugLevel,
		Filename:   "test.log",
		MaxSize:    maxSize,
		MaxBackups: 2,
		MaxAge:     30,
		LocalTime:  true,
		Compress:   true,
	}
	Setting(conf)
	var arr = make([]byte, gb*maxSize)
	rand.Read(arr)
	Info(arr)
}

func TestSetting(t *testing.T) {
	var conf = Config{
		LogLevel:   DebugLevel,
		Filename:   "test.log",
		MaxSize:    10,
		MaxBackups: 2,
		MaxAge:     30,
		LocalTime:  true,
		Compress:   true,
	}
	Setting(conf)
	Info("after setting info level")
	WithFields(Fields{"test": "test"}).Info("after setting info level")
}

func TestLevelLower(t *testing.T) {
	var conf = Config{
		LogLevel:   InfoLevel,
		Filename:   "test.log",
		MaxSize:    10,
		MaxBackups: 2,
		MaxAge:     30,
		LocalTime:  true,
		Compress:   true,
	}
	Setting(conf)
	Debug("after setting info level")
	WithFields(Fields{"test": "test"}).Debug("after setting info level")
}

func TestRotate(t *testing.T) {
	var conf = Config{
		LogLevel:   DebugLevel,
		Filename:   "test.log",
		MaxSize:    10,
		MaxBackups: 2,
		MaxAge:     30,
		LocalTime:  true,
		Compress:   true,
	}
	Setting(conf)
	Rotate()
	Info("after setting info level")
	WithFields(Fields{"test": "test"}).Info("after setting info level")
}

func BenchmarkInfo(b *testing.B) {
	for n := 0; n < b.N; n++ {
		Info("info level")
	}
}

func BenchmarkInfoFile(b *testing.B) {
	for n := 0; n < b.N; n++ {
		Info("write info level to file")
	}
}
