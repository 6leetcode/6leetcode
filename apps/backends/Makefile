include .env
export $(shell sed 's/=.*//' .env)

app_name                = leetcode
docker_name             = $(app_name)
docker_tag              = dev
docker_container        = $(app_name)

BuildStamp              = $(shell date '+%Y%m%d%H%M%S')
GitHash                 = $(shell git rev-parse HEAD)
Version                 = $(shell git describe --abbrev=0 --tags --always)
Target                  = $(shell basename $(abspath $(dir $$PWD)))
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
	env GO111MODULE=off GOOS=$@ go build -v -o release/${Target}-$@${Suffix} -ldflags "-X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

.PHONY: release
release: clean
	env GO111MODULE=off GOOS=${OSName} go build -v -o release/${Target}-${OSName}${Suffix} -ldflags "-s -w -X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

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

.PHONY: upgrade
upgrade:
	docker-compose pull

.PHONY: build
build:
	docker build -f docker.release.Dockerfile -t $(docker_name):$(docker_tag) .

.PHONY: build-dev
build-dev:
	docker build -f docker.dev.Dockerfile -t $(docker_name)-dev:$(docker_tag) .

.PHONY: run
run:
	docker-compose up --force-recreate -d zhili

.PHONY: run-dev
run-dev:
	docker-compose up --force-recreate -d zhili-dev

.PHONY: exec
exec:
	docker exec -e COLUMNS="`tput cols`" -e LINES="`tput lines`" -it $(docker_container) /bin/sh

.PHONY: exec-dev
exec-dev:
	docker exec -e COLUMNS="`tput cols`" -e LINES="`tput lines`" -it $(docker_container)-dev /usr/bin/fish
