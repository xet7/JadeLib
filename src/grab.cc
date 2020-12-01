#include "include/jade.hpp"

FUNCTION STRING GRAB$ (CONSTANT STRING &src, CONSTANT STRING &start, CONSTANT STRING &stop) DO
    size_t begin = src.find(start);
    size_t end = (begin + start.length());
    size_t term = src.find(stop);

    return TRIM$(src.substr(end, (term - end)));
END

