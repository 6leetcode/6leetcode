BuildStamp = $(shell date '+%Y%m%d%H%M%S')
GitHash    = $(shell git rev-parse HEAD)
Version    = $(shell git describe --abbrev=0 --tags --always)
TARGET     = 6leetcode
PREFIX    ?= /usr/local

.PHONY: build
build:
	go build -v -o release/${TARGET} -ldflags \
	"-X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

.PHONY: release
release:
	go build -v -o release/${TARGET} -ldflags \
	"-s -w -X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

.PHONY: lint
lint:
	golangci-lint run -v

.PHONY: clean
clean:
	@$(RM) -r release *.db *.db-journal

.PHONY: install
install:
	install -m 755 release/$(TARGET) $(PREFIX)/bin
