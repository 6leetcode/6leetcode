BuildStamp = $(shell date '+%Y%m%d%H%M%S')
GitHash    = $(shell git rev-parse HEAD)
Version    = $(shell git describe --abbrev=0 --tags --always)
TARGET    ?= leet
PREFIX    ?= /usr/local

.PHONY: build
build:
	go build -v -o bin/${TARGET} -ldflags \
	"-s -w -X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

.PHONY: lint
lint:
	golangci-lint run -v

.PHONY: clean
clean:
	@$(RM) -r bin *.db *.db-journal

.PHONY: install
install: build
	install -m 755 bin/$(TARGET) $(PREFIX)/bin
