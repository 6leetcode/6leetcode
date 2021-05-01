BuildStamp = $(shell date '+%Y%m%d%H%M%S')
GitHash    = $(shell git rev-parse HEAD)
Version    = $(shell git describe --abbrev=0 --tags --always)
TARGET    ?= leet
PREFIX    ?= /usr/local
PKG        = leet/cmd/version

.PHONY: build
build:
	go build -v -o bin/${TARGET} -ldflags \
	"-s -w -X ${PKG}.BuildStamp=${BuildStamp} -X ${PKG}.GitHash=${GitHash} -X ${PKG}.Version=${Version}"

.PHONY: lint
lint:
	golangci-lint run -v

.PHONY: clean
clean:
	@$(RM) -r bin *.db *.db-journal

.PHONY: install
install: build
	install -m 755 bin/$(TARGET) $(PREFIX)/bin
