# Declaration of variables
CC = g++
CC_FLAGS = -I. --std=c++11 -O2 -c
 
 
# File names
LIB = lib/libjade.a
INC = ./include/jade.hpp
AR = ar -rcs
SOURCES = $(wildcard src/*.cc)
OBJECTS = $(SOURCES:.cc=.o)
PREFIX = /usr/local

ifeq ($(OS),Windows_NT)
	MKDIR=md
	LIBFOLDER=.\lib
	OBJFOLDER=.\obj
	RMDIR=rmdir /s /q
	RM=del /s
else
	MKDIR=mkdir -p
	LIBFOLDER=./lib
	OBJFOLDER=./obj
	RMDIR=rm -r
	RM=rm
endif



# Main target
$(LIB): $(OBJECTS)
	@-$(MKDIR) $(LIBFOLDER)
	@$(AR) $(LIB) $(OBJFOLDER)/*.o
	@echo ""
	@echo "$(LIB) Created."
	@echo ""
 
# To obtain object files
%.o: %.cc
	@-$(MKDIR) $(OBJFOLDER)
	@$(CC) $(CC_FLAGS) $< -o $(OBJFOLDER)/$(notdir $@)
	@echo "Creating $(notdir $@) "

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
	@-$(RMDIR) $(LIBFOLDER)
	@-$(RMDIR) $(OBJFOLDER)
	@echo "Removed: Library"
