#include "include/jade.hpp"



SUB ABORT(STRING msg, STRING offendingline) DO
    // PRINT("\n** RUNTIME ERROR **\n");
    std::cout << "\n** RUNTIME ERROR **\n" << std::endl;
    // PRINT("\t",msg);
    std::cout << "\t" << msg << std::endl;
    IF (offendingline.size()) THEN
        // PRINT("\n** Original Call**\n");
        std::cout << "\n** Original Call**\n" << std::endl;
        // PRINT("\t",offendingline,"\n");
        std::cout << "\t" << offendingline << "\n" << std::endl;
    ELSE
        std::cout << std::endl;
    END
    exit(EXIT_FAILURE);
END

