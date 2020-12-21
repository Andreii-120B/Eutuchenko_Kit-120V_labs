targets = lab5,1.bin lab5,2.bin, lab5,3.bin lab5,4.bin lab5,5.bin
CC = gcc
AM_LDFLAGS = -lm
C_OPTS = -std=gnu11 -g -Wall -Wextra -lm -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab5,1.bin lab5,2.bin lab5,3.bin lab5,4.bin lab5,5.bin
lab5,1.bin: src/lab5,1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab5,2.bin: src/lab5,2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab5,3.bin: src/lab5,3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab5,4.bin: src/lab5,4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab5,5.bin: src/lab5,5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
	
	

run: clean prep compile
	./dist/lab5,3.bin 
 
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
