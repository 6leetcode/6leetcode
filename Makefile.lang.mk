CFiles          := $(wildcard *.c)
CCFiles         := $(wildcard *.cc)
RustFiles       := $(wildcard *.rs)
GolangFiles     := $(wildcard go*)
PythonFiles     := $(wildcard *.py)
PHPFiles        := $(wildcard *.php)
JavascriptFiles := $(wildcard *.js)
JavaFiles       := $(wildcard *.java)
BashFiles       := $(wildcard *.sh)

.PHONY: all
all: c cc rust golang python php javascript java bash

.PHONY: c
c: $(CFiles)

.PHONY: $(CFiles)
$(CFiles):
	@echo Running `echo $@ | cut -d. -f1`:
	@echo
	@make -C ../../library/c/sds
	@$(CC) -std=c99 -I../../library/c -I../../library/c/sds ../../library/c/sds/sds.o -lm -Os -g3 -Wall -fsanitize=address,signed-integer-overflow \
	-o `echo $@ | cut -d. -f1`.test $@
	@./`echo $@ | cut -d. -f1`.test
	@$(RM) -rf `echo $@ | cut -d. -f1`.test *.dSYM
	@echo

.PHONY: cc
cc: $(CCFiles)

.PHONY: $(CCFiles)
$(CCFiles):
	@echo Running `echo $@ | cut -d. -f1`:
	@echo
	@$(CXX) -std=c++17 -I../../library/cc -lm -Os -g3 -fsanitize=address,signed-integer-overflow \
	-o `echo $@ | cut -d. -f1`.test $@
	@./`echo $@ | cut -d. -f1`.test
	@$(RM) -rf `echo $@ | cut -d. -f1`.test *.dSYM
	@echo

.PHONY: rust
rust: $(RustFiles)

.PHONY: $(RustFiles)
$(RustFiles):
	@echo Running `echo $@ | cut -d. -f1`:
	@echo
	@rustc -o `echo $@ | cut -d. -f1`.test $@
	@./`echo $@ | cut -d. -f1`.test
	@$(RM) -rf `echo $@ | cut -d. -f1`.test
	@echo

.PHONY: golang
golang: $(GolangFiles)

.PHONY: $(GolangFiles)
$(GolangFiles):
	@echo Running `echo $@ | cut -d. -f1`:
	@echo
	@cd $@ && go run .
	@echo

.PHONY: python
python: $(PythonFiles)

.PHONY: $(PythonFiles)
$(PythonFiles):
	@echo Running `echo $@ | cut -d. -f1`:
	@echo
	@python3 $@
	@echo

.PHONY: javascript
javascript: $(JavascriptFiles)

.PHONY: $(JavascriptFiles)
$(JavascriptFiles):
	@echo Running `echo $@ | cut -d. -f1`:
	@echo
	@node $@
	@echo

.PHONY: java
java: $(JavaFiles)

.PHONY: $(JavaFiles)
$(JavaFiles):
	@echo Running `echo $@ | cut -d. -f1`:
	@echo
	@javac $@
	@java `echo $@ | cut -d . -f1`
	@$(RM) -rf *.class
	@echo

.PHONY: php
php: $(PHPFiles)

.PHONY: $(PHPFiles)
$(PHPFiles):
	@echo Running `echo $@ | cut -d. -f1`:
	@echo
	@php $@
	@echo

.PHONY: bash
bash: $(BashFiles)

.PHONY: $(BashFiles)
$(BashFiles):
	@echo Running `echo $@ | cut -d. -f1`:
	@echo
	@./`echo $@ | cut -d. -f1`.sh
	@echo
