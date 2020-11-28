#include "include/jade.hpp"

FUNCTION INTEGER KILLFILE(STRING filename) DO
    RETURN (std::remove(filename.c_str()));
END