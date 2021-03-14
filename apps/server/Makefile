app_name   = 6leetcode

BuildStamp = $(shell date '+%Y%m%d%H%M%S')
GitHash    = $(shell git rev-parse HEAD)
Version    = $(shell git describe --abbrev=0 --tags --always)
Target     = ${app_name}

.PHONY: build
build:
	go build -v -o release/${Target} -ldflags \
	"-X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

.PHONY: release
release:
	go build -v -o release/${Target} -ldflags \
	"-s -w -X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

.PHONY: lint
lint:
	golangci-lint run -v

.PHONY: clean
clean:
	@$(RM) -r release *.db *.db-journal
