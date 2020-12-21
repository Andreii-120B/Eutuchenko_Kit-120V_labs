targets = task1.bin task2.bin task3.bin task4.bin
CC = gcc
AM_LDFLAGS = -lm
C_OPTS = -std=gnu11 -g -Wall -Wextra -lm -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src



all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: task1.bin task2.bin task3.bin task4.bin
task1.bin: src/task1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task2.bin: src/task2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task3.bin: src/task3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
task4.bin: src/task4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
			
doxygen:
	doxygen Doxyfile	

run: clean prep compile
	./dist/task4.bin
 

format: #TODO

tidy: # TODO
