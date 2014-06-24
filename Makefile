# Compiler
CC = g++
CFLAGS = -Wall -std=c++11

# Files:
FILES = main.cpp weapon.cpp
#or
# FILES = $(wildcard *.cpp)

BINNAME = nameGenerator.exe

all: compile
.PHONY: all

compile: $(FILES)
	$(CC) $(CFLAGS) $(FILES) -o $(BINNAME)
.PHONY: compile

run:
	$(BINNAME)
.PHONY: run

clean:
	rm -f $(BINFOLD)*
.PHONY: clean