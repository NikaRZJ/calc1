flags = -Wall -Werror

all: bin build bin/calc 

bin/calc: build/main.o build/function.o
	gcc $(flags) build/main.o build/function.o -o bin/calc -lm

build/main.o: src/main.c
	gcc $(flags) -c src/main.c -o build/main.o -lm

build/function.o: src/function.c
	gcc $(flags) -c src/function.c -o build/function.o -lm

bin:
	mkdir -p bin

build:
	mkdir -p build

.PHONY: clean

clean:
	rm -rf build bin


