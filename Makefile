TARGETS = c cc golang java python rust node php shell

all: ${TARGETS}

${TARGETS}:
	@docker-compose build $@
	@docker-compose run $@ make -f testing/$@.makefile run

format:
	@python3 scripts/$@.py

generate:
	@python3 scripts/$@.py
