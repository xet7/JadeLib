#include "include/jade.hpp"

void COLOR(int fg, int bg)
{
    printf("%c%s%u%s%u%s", 27, "[", 30 + (fg & 7), ";", 40 + (bg & 7), "m");
}