#include <jade.hpp>

MAIN
    PRINT("Today is ",DATE$());
    PRINT("Today is ",TIME$(12));

    PRINT("The Hour is ",TIME$(1));
    PRINT("The Minute is ",TIME$(2));
    PRINT("The Second is ",TIME$(3));
    PRINT("The AM/PM is ",TIME$(4));
    PRINT("The Year is ",TIME$(5));
    PRINT("The Month is ",TIME$(6));
    PRINT("The Day is ",TIME$(7));
    PRINT("The Day Name is ",TIME$(8));
    PRINT("The Week Day is ",TIME$(9));
    PRINT("The Year Day is ",TIME$(10));
    PRINT("The Week is ",TIME$(11));
END