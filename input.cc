#include "include/jade.hpp"

FUNCTION STRING INPUT(STRING prompt) DO
    STRING input;
    std::cout << prompt + ": ";
    getline (std::cin, input);
    RETURN input;
END