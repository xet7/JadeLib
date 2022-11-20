#include "../include/jade.hpp"

MAIN
    STRING sample("This is a sample string");
    STRING src(sample);
    STRING vowels{ "aeiouy" };

    PRINT("String to search: '", sample,"'\n");
    FOR(VAR letter IN src) DO
        IF( STRING::npos != vowels.find(letter) ) THEN
            PRINT("Found Vowel: ", letter);
        END
    END
END


