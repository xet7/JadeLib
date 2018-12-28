#include "include/jade.hpp"

FUNCTION STRING GRAB$ (CONSTANT STRING &src, CONSTANT STRING &start, CONSTANT STRING &stop) DO
    DIM AS size_t begin = src.find(start);
    DIM AS size_t end = (begin + start.length());
    DIM AS size_t term = src.find(stop);

    return src.substr(end, (term - end));
ENDFUNCTION

