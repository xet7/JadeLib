#include "include/jade.hpp"

void LOCATE(int row, int col)
{
    printf("%c%s%u%s%u%s", 27, "[", row, ";", col, "H");
}