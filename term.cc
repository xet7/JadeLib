#include "include/jade.hpp"

void CLEAR()
{
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
    printf("%c%s%c%s", 27, "[2J", 27, "[H");
}

void LOCATE(int row, int col)
{
    printf("%c%s%u%s%u%s", 27, "[", row, ";", col, "H");
}

void COLOR(int fg, int bg)
{
    printf("%c%s%u%s%u%s", 27, "[", 30 + (fg & 7), ";", 40 + (bg & 7), "m");
}