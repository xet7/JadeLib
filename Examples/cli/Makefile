# JADE Examples Makefile
CC = g++
CC_FLAGS = --std=c++11 -O2 -s 
 
 
# File names
SOURCES = $(wildcard *.cc)
TARGETS = $(SOURCES:.cc=)

ifeq ($(OS),Windows_NT)
	BIN=.\bin
	CC_FLAGS += -I..\..\include -L..\..\lib -ljade
	MKDIR=md
	RM=del
	RMBIN=rmdir /s /q $(BIN)
else
	BIN=./bin
	CC_FLAGS += -I../../include -L../../lib -ljade
	MKDIR=mkdir -p
	RM=rm
	RMBIN=rm -r $(BIN)
endif
 
# Main target
all: BIN_FOLDER $(TARGETS)

%: %.cc

	@$(CC) $< $(CC_FLAGS)  -o $(BIN)/$@
	@echo "Compiling $@..."



.PHONY: clean
clean: 
	@-$(RMBIN)
	@echo "Removed Demo Files."

BIN_FOLDER:
	@-$(MKDIR) $(BIN)

