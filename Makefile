.PHONY: build
build:
	mkdir -p dist
	g++ -Wall -Wextra -pedantic-errors -O3 -std=gnu++2a -o dist/app src/KitKat.cpp src/main.cpp

.PHONY: test
test:
	mkdir -p dist
	g++  -Wall -Wextra -pedantic-errors -std=gnu++2a -o dist/test src/KitKat.cpp test/test.cpp
	dist/test

.PHONY: clean
clean:
	rm -rf dist

