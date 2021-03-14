TARGETS = c cc golang java python rust node php shell

all: ${TARGETS}

${TARGETS}:
	@docker-compose build $@
	@docker-compose run $@ make -f testing/$@.makefile run -j 8

gen:
	@6leetcode gen
