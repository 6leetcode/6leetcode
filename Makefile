format:
	@python3 format.py

php gcc golang java python rust node:
	@docker-compose up --force-recreate -d $@
	@docker exec -e COLUMNS="`tput cols`" -e LINES="`tput lines`" -it $@ /usr/bin/fish

generate:
	@python3 gen.py

authors:
	printf "Authors\n=======\n\nProject's contributors:\n\n" > AUTHORS.md
	git log --raw | grep "^Author: " | cut -d ' ' -f2- | cut -d '<' -f1 | sed 's/^/- /' | sort | uniq >> AUTHORS.md
