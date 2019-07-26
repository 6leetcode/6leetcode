format:
	@python3 format.py

php gcc golang java python rust node:
	@docker-compose up --force-recreate -d $@
	@docker exec -e COLUMNS="`tput cols`" -e LINES="`tput lines`" -it $@ /usr/bin/fish

generate:
	@python3 gen.py
