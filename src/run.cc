#include "../include/jade.hpp"

SUB RUN(STRING command) DO
    VAR retVal = std::system(command.c_str());
END
