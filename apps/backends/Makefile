include .env
export $(shell sed 's/=.*//' .env)

app_name                = 6leetcode

BuildStamp              = $(shell date '+%Y%m%d%H%M%S')
GitHash                 = $(shell git rev-parse HEAD)
Version                 = $(shell git describe --abbrev=0 --tags --always)
Target                  = ${app_name}
Suffix                  =
GOFILES                 = $(shell find . -name "*.go" -type f ! -path "./vendor/*" ! -path "*/bindata.go")

ifeq ($(OS),Windows_NT)
	OSName = windows
	Suffix = .exe
else
	OSName = $(shell echo $(shell uname -s) | tr '[:upper:]' '[:lower:]')
endif

.PHONY: ${OSName}
${OSName}: clean
	env GOOS=$@ go build -v -o release/${Target}-$@${Suffix} -mod=readonly -ldflags "-X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

.PHONY: release
release: clean
	env GOOS=${OSName} go build -v -o release/${Target}-${OSName}${Suffix} -ldflags "-s -w -X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

.PHONY: authors
authors:
	printf "Authors\n=======\n\nProject's contributors:\n\n" > AUTHORS.md
	git log --raw | grep "^Author: " | cut -d ' ' -f2- | cut -d '<' -f1 | sed 's/^/- /' | sort | uniq >> AUTHORS.md

.PHONY: lint
lint:
	golangci-lint run -v

.PHONY: misspell-check
misspell-check:
	@hash misspell > /dev/null 2>&1; if [ $$? -ne 0 ]; then \
		go get -u github.com/client9/misspell/cmd/misspell; \
	fi
	misspell -error -i unknwon $(GOFILES)

.PHONY: clean
clean:
	@$(RM) -r release *.db *.db-journal

.PHONY: docker-build-release
docker-build-release:
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
