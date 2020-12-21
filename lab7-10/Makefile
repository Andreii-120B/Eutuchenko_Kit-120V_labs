targets = remakelab61.bin remakelab62.bin, remakelab63.bin remakelab64.bin remakelab65.bin remakelab66.bin remakelab51.bin remakelab52.bin remakelab54.bin remakelab5,4.bin remakelab5,5.bin dop_zadanie.c
CC = gcc
AM_LDFLAGS = -lm
C_OPTS = -std=gnu11 -g -Wall -Wextra -lm -Wformat-security -Wfloat-equal -Wshadow -Wconversion -Wlogical-not-parentheses -Wnull-dereference -I./src



all: clean prep compile run

clean:
	rm -rf dist
prep:
	mkdir dist
compile: remakelab61.bin remakelab62.bin remakelab63.bin remakelab64.bin remakelab65.bin remakelab66.bin remakelab51.bin remakelab52.bin remakelab53.bin remakelab54.bin remakelab55.bin dop_zadanie.bin
remakelab61.bin: src/remakelab61.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
remakelab62.bin: src/remakelab62.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
remakelab63.bin: src/remakelab63.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
remakelab64.bin: src/remakelab64.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
remakelab65.bin: src/remakelab65.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
remakelab66.bin: src/remakelab66.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
remakelab51.bin: src/remakelab51.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
remakelab52.bin: src/remakelab52.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
remakelab53.bin: src/remakelab53.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
remakelab54.bin: src/remakelab54.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
remakelab55.bin: src/remakelab55.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
dop_zadanie.bin: src/dop_zadanie.c
	$(CC) $(C_OPTS) $< -o ./dist/$@
		
			
doxygen:
	doxygen Doxyfile	

run: clean prep compile
	./dist/remakelab52.bin 
 

format: #TODO

tidy: # TODO
