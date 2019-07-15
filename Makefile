format:
	@python3 format.py

run:
	docker-compose up --force-recreate -d leetcode

exec:
	docker exec -e COLUMNS="`tput cols`" -e LINES="`tput lines`" -it leetcode /usr/bin/fish
