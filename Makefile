# Compiler
CC = g++
CFLAGS = -static -Wall -std=c++11 -static-libgcc -static-libstdc++

# Files:
FILES = main.cpp weapon.cpp armor.cpp game.cpp player.cpp
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