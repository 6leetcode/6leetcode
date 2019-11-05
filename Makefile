Target = php gcc golang java python rust node

all: $(Target)

format:
	@python3 scripts/format.py

$(Target):
	@docker-compose up --force-recreate -d $@

generate:
	@python3 scripts/gen.py

authors:
	printf "Authors\n=======\n\nProject's contributors:\n\n" > AUTHORS.md
	git log --raw | grep "^Author: " | cut -d ' ' -f2- | cut -d '<' -f1 | sed 's/^/- /' | sort | uniq >> AUTHORS.md
