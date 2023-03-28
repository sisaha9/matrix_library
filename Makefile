.ONESHELL:
SHELL := /bin/bash
.DEFAULT_GOAL := build

.PHONY: build
build:
	@cmake -DCMAKE_BUILD_TYPE=Release -S . -B build
	@cmake --build build

.PHONY: build-debug
build-debug:
	@cmake -DCMAKE_BUILD_TYPE=RelWithDebInfo -S . -B build
	@cmake --build build

.PHONY: clean
clean:
	@rm -rf build

.PHONY: clean-docs
clean-docs:
	@rm -rf generated-docs

.PHONY: purge
purge:
	@rm -rf build generated-docs

.PHONY: reformat
reformat:
	@clang-format --style=file -i matrix_library/**/*.h
	@clang-format --style=file -i examples/*.cc
	@clang-format --style=file -i tests/*.cc

.PHONY: list-examples
list-examples:
	@find build/examples -type f -executable

.PHONY: list-tests
list-tests:
	@find build/tests -type f -executable

.PHONY: run-example
run-example:
	@./build/examples/${EXAMPLE}

.PHONY: run-test
run-test:
	@./build/tests/${TEST}

.PHONY: test
test:
	@cd build/
	@make test
	@cd ../

.PHONY: test-ci
test-ci:
	@./scripts/test-ci.sh

.PHONY: docs
docs:
	@doxygen Doxyfile