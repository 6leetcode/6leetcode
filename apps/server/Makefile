include .env
export $(shell sed 's/=.*//' .env)

export COMPOSE_IGNORE_ORPHANS=True # ignore others container

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
	go build -v -o release/${Target}${Suffix} -tags=jsoniter -ldflags "-X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

.PHONY: release
release:
	env GOOS=${OSName} go build -v -o release/${Target}${Suffix} -tags=jsoniter -ldflags "-s -w -X main.BuildStamp=${BuildStamp} -X main.GitHash=${GitHash} -X main.Version=${Version}"

.PHONY: lint
lint:
	golangci-lint run -v

.PHONY: clean
clean:
	@$(RM) -r release *.db *.db-journal

.PHONY: docker-build
docker-build:
	if [ ! -f config.yml ]; then cp config.yml.sample config.yml; fi
	docker-compose build $(app_name)

.PHONY: docker-run
docker-run:
	docker-compose up --force-recreate -d $(app_name)

.PHONY: docker-exec
docker-exec:
	docker-compose exec $(app_name) /bin/bash

.PHONY: up
up:
	docker-compose up --force-recreate

.PHONY: up-database
up-database:
	$(shell if [ ! -d $(VOLUME_PREFIX)/postgresql-master ]; then mkdir -p $(VOLUME_PREFIX)/postgresql-master; fi)
	$(shell if [ ! -d $(VOLUME_PREFIX)/postgresql-slave ]; then mkdir -p $(VOLUME_PREFIX)/postgresql-slave; fi)
	sudo chown -R 1001:1001 $(VOLUME_PREFIX)/postgresql-master
	sudo chown -R 1001:1001 $(VOLUME_PREFIX)/postgresql-slave
	docker-compose up --force-recreate -d postgresql-master postgresql-slave

.PHONY: up-server
up-server:
	docker-compose up --force-recreate -d 6leetcode

.PHONY: up-server-dev
up-server-dev:
	docker-compose up --force-recreate --build -d 6leetcode-dev

.PHONY: up-init
up-init:
	if [ -d data ]; then sudo rm -rf data; fi
	mkdir -p data/postgresql-master data/postgresql-slave data/traefik
	touch data/traefik/acme.json
	sudo chown -R 1001:1001 data/postgresql-master
	sudo chown -R 1001:1001 data/postgresql-slave
