#include "include/jade.hpp"

FUNCTION ARRAY<long> RANGE(long low, long high) {
    ARRAY<long> v(high);
    std::iota (std::begin(v), std::end(v), 0);
    return v;
}
