package logging

// Level log level
type Level uint

const (
	// DebugLevel Debug level
	DebugLevel Level = iota
	// InfoLevel Info level
	InfoLevel
	// WarnLevel Warn Level
	WarnLevel
	// ErrorLevel Error Level
	ErrorLevel
	// FatalLevel Fatal level
	FatalLevel
	// PanicLevel Panic level
	PanicLevel
)

// String get the log level's string
func (level Level) String() string {
	switch level {
	case DebugLevel:
		return "debug"
	case InfoLevel:
		return "info"
	case WarnLevel:
		return "warning"
	case ErrorLevel:
		return "error"
	case FatalLevel:
		return "fatal"
	case PanicLevel:
		return "panic"
	}
	return "unknown"
}
