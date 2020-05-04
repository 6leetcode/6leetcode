app_name                = 6leetcode

BuildStamp              = $(shell date '+%Y%m%d%H%M%S')
GitHash                 = $(shell git rev-parse HEAD)
Version                 = $(shell git describe --abbrev=0 --tags --always)
Target                  = ${app_name}
Suffix                  =

ifeq ($(OS),Windows_NT)
	OSName = windows
	Suffix = .exe
else
	OSName = $(shell echo $(shell uname -s) | tr '[:upper:]' '[:lower:]')
endif

.PHONY: ${OSName}
${OSName}:
	env GOOS=$@ GO111MODULE=off go build -v -o release/${Target}${Suffix} -ldflags "-X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

.PHONY: release
release:
	env GOOS=${OSName} GO111MODULE=off go build -v -o release/${Target}${Suffix} -ldflags "-s -w -X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

.PHONY: lint
lint:
	golangci-lint run -v

.PHONY: clean
clean:
	@$(RM) -r release *.db *.db-journal

.PHONY: docker-build-release
docker-build-release:
	if [ ! -f config.yml ]; then cp config.yml.sample config.yml; fi
	docker-compose build $(app_name)

.PHONY: docker-build
docker-build:
	docker-compose build $(app_name)-dev

.PHONY: docker-run-release
docker-run-release:
	docker-compose up --force-recreate -d $(app_name)

.PHONY: docker-run
docker-run:
	docker-compose up --force-recreate -d $(app_name)-dev

.PHONY: docker-exec-release
docker-exec-release:
	docker-compose exec $(app_name) /bin/bash

.PHONY: docker-exec
docker-exec:
	docker-compose exec $(app_name)-dev /usr/bin/fish
