targets = lab4,1.bin lab4,2.bin lab4,3.bin lab4,4.bin lab4,5.bin
CC = gcc
C_OPTS = -std=gnu11 -g -Wall -Wextra -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src

all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab4,1.bin lab4,2.bin lab4,3.bin lab4,4.bin lab4,5.bin
lab4,1.bin: src/lab4,1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab4,2.bin: src/lab4,2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab4,3.bin: src/lab4,3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@	
lab4,4.bin: src/lab4,4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab4,5.bin: src/lab4,5.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
run: clean prep compile
	./dist/lab4,2.bin 
 

doxygen:
	doxygen Doxyfile
format: #TODO

tidy: # TODO
