#include <jade.hpp>

MAIN
    INTEGER a=0, b=0;

    WHILE (a < 20) DO
        a+=1;

        IF (a == 10) THEN
            b += 21;
        END

        PRINT("This is Line no. ", a);
    WEND

    PRINT("The value of 'b' = ",b);
END