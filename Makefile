TARGETS = c cc golang java python rust node php

all: ${TARGETS}

${TARGETS}:
	@docker-compose build $@
	@docker-compose run $@ make -f testing/$@.makefile run

format:
	@python3 scripts/format.py

generate:
	@python3 scripts/gen.py
