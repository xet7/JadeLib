#include "../jade.hpp"

MAIN
    STRING file_contents(LOADFILE$("testload.cc"));
    PRINT(file_contents);
ENDMAIN

