APPNAME = leet
TARGETS = bash c cc golang java typescript php python rust

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

.PHONY: changelog
changelog:
	@git-chglog -o CHANGELOG.md

.PHONY: deploy
deploy:
	@$(RM) -r docs
	leet gen
	cd apps/web && npm run build
	mv apps/web/build docs
