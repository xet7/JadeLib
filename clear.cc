#include "include/jade.hpp"

void CLEAR()
{
    // CSI[2J clears screen, CSI[H moves the cursor to top-left corner
    printf("%c%s%c%s", 27, "[2J", 27, "[H");
}