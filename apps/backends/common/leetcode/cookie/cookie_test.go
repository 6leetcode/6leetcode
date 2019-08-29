package cookie

import (
	"reflect"
	"testing"
)

func TestParse(t *testing.T) {
	type args struct {
		str string
	}
	tests := []struct {
		name       string
		args       args
		wantCookie Cookie
	}{
		{"1", args{"a=1"}, Cookie{"a": "1"}},
		{"2", args{"a=1; b=2"}, Cookie{"a": "1", "b": "2"}},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			if gotCookie := Parse(tt.args.str); !reflect.DeepEqual(gotCookie, tt.wantCookie) {
				t.Errorf("Parse() = %v, want %v", gotCookie, tt.wantCookie)
			}
		})
	}
}

func TestCookie_String(t *testing.T) {
	tests := []struct {
		name    string
		c       Cookie
		wantStr string
	}{
		{"1", Cookie{"a": "1"}, "a=1"},
		{"2", Cookie{"a": "1", "b": "2"}, "a=1; b=2"},
	}
	for _, tt := range tests {
		t.Run(tt.name, func(t *testing.T) {
			if gotStr := tt.c.String(); gotStr != tt.wantStr {
				t.Errorf("Cookie.String() = %v, want %v", gotStr, tt.wantStr)
			}
		})
	}
}
