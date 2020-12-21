targets = lab11_1.bin lab11_2.bin lab11_3.bin lab11_4.bin
CC = gcc
AM_LDFLAGS = -lm
C_OPTS = -std=gnu11 -g -Wall -Wextra -lm -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src



all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: lab11_1.bin lab11_2.bin lab11_3.bin lab11_4.bin
lab11_1.bin: src/lab11_1.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab11_2.bin: src/lab11_2.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
lab11_3.bin: src/lab11_3.c
	$(CC) $(C_OPTS) $< -o ./dist/$@	
lab11_4.bin: src/lab11_4.c
	$(CC) $(C_OPTS) $< -o ./dist/$@

			
doxygen:
	doxygen Doxyfile	

run: clean prep compile
	./dist/lab11_1.bin 
	./dist/lab11_2.bin
	./dist/lab11_3.bin
	./dist/lab11_4.bin
 

format: #TODO

tidy: # TODO
