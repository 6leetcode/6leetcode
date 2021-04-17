APPNAME = leet
TARGETS = bash c cc golang java javascript php python rust

.PHONY: all
all: ${TARGETS}

.PHONY: ${TARGETS}
${TARGETS}: clean
	docker build -t ${APPNAME}:$@ -f docker/$@.Dockerfile .
	docker run --rm -v ${PWD}:/app ${APPNAME}:$@ make -f testing/$@.makefile run

.PHONY: clean
clean:
	$(RM) questions/library/c/sds/*.o

.PHONY: install
install:
	env TARGET=${APPNAME} make -C apps/cli install

.PHONY: gen
gen:
	@${APPNAME} $@

.PHONY: changelog
changelog:
	@git-chglog -o CHANGELOG.md
