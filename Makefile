# Declaration of variables
CC = g++
CC_FLAGS = -I. --std=c++11 -O2 -c
 
 
# File names
LIB = lib/libjade.a
INC = ./include/jade.hpp
AR = ar -rcs
SOURCES = $(wildcard *.cc)
OBJECTS = $(SOURCES:.cc=.o)
PREFIX = /usr/local
# Main target
$(LIB): $(OBJECTS)
	@mkdir -p ./lib
	@$(AR) $(LIB) $(OBJECTS)
	@echo
	@echo "$(LIB) Created."
	@echo
 
# To obtain object files
%.o: %.cc
	@$(CC) $(CC_FLAGS) $< -o $@
	@echo "Creating $@ "

install: $(LIB)
	@echo "Installing..."
	install -d $(PREFIX)/lib
	install -d $(PREFIX)/include
	install -m 644 $(LIB) $(PREFIX)/lib
	install -m 644 $(INC) $(PREFIX)/include
	@echo "Library Installed"

uninstall:
	@echo "Uninstalling libjade..."
	@rm -f $(PREFIX)/lib/libjade.a
	@rm -f $(PREFIX)/include/jade.hpp
	@echo "Uninstall complete."

# To remove generated files
clean:
	@rm -f $(LIB) $(OBJECTS)
	@ if [ -d ./lib ];then rmdir ./lib;fi
	@echo "Removed: Library"
