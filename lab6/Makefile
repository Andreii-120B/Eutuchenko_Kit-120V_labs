targets = lab6,1.bin lab6,2.bin, lab6,3.bin lab6,4.bin lab6,5.bin lab6,6.bin
CC = gcc
AM_LDFLAGS = -lm
C_OPTS = -std=gnu11 -g -Wall -Wextra -lm -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab6,1.bin lab6,2.bin lab6,3.bin lab6,4.bin lab6,5.bin lab6,6.bin
lab6,1.bin: src/lab6,1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6,2.bin: src/lab6,2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6,3.bin: src/lab6,3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6,4.bin: src/lab6,4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6,5.bin: src/lab6,5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab6,6.bin: src/lab6,6.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
		
	

run: clean prep compile
	./dist/lab6,3.bin 
 
doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
