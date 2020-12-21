targets = lab03.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab03.bin
lab03.bin: src/lab03.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/lab03.bin
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
