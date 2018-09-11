flags = -Wall -Werror

all: bin build bin/calc bin/test tests
bin/calc: build/main.o build/function.o
	gcc $(flags) build/main.o build/function.o -o bin/calc -lm

build/main.o: src/main.c
	gcc $(flags) -c src/main.c -o build/main.o -lm

build/function.o: src/function.c
	gcc $(flags) -c src/function.c -o build/function.o -lm

bin/test: build/first_test.o build/test.o build/function.o
	gcc $(flags) build/function.o build/test.o build/first_test.o -o bin/test -lm

build/test.o: test/test.c
	gcc $(flags) -c test/test.c -o build/test.o -Ithirdparty -Isrc -lm

build/first_test.o: test/first_test.c
	gcc $(flags) -c test/first_test.c -o build/first_test.o -Ithirdparty -lm

bin:
	mkdir -p bin

build:
	mkdir -p build
tests:
	./bin/test

.PHONY: clean

clean:
	rm -rf build bin

