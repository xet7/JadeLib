# JADE Examples Makefile
CC = g++
CC_FLAGS = --std=c++11 -I../include -O2 -s -L../ -ljade
 
 
# File names
SOURCES = $(wildcard *.cc)
TARGETS = $(SOURCES:.cc=)
BIN=./bin
 
# Main target
all: $(TARGETS)

%: %.cc
	@mkdir -p $(BIN)
	@$(CC) $(CC_FLAGS) $< -o $(BIN)/$@
	@echo "Compiling $@..." 

.PHONY: clean
clean: 
	@ if [ -d $(BIN) ];then rm -r $(BIN);fi
	@echo "Removed: $(TARGETS)."
	
