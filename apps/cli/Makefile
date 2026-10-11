BuildStamp = $(shell date '+%Y%m%d%H%M%S')
GitHash    = $(shell git rev-parse HEAD 2>/dev/null)
Version    = $(shell git describe --abbrev=0 --tags --always 2>/dev/null)
TARGET    ?= leet
PREFIX    ?= /usr/local

.PHONY: build
build:
	bun build --compile --minify \
		--define 'LEET_VERSION="$(Version)"' \
		--define 'LEET_BUILD_STAMP="$(BuildStamp)"' \
		--define 'LEET_GIT_HASH="$(GitHash)"' \
		--outfile bin/${TARGET} src/index.ts

.PHONY: run
run:
	bun run src/index.ts

.PHONY: clean
clean:
	@$(RM) -r bin *.db *.db-journal

.PHONY: install
install: build
	install -m 755 bin/$(TARGET) $(PREFIX)/bin
