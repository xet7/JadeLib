#include "include/jade.hpp"

FUNCTION ARRAY<long> RANGE(long low, long high) {
    IF (low > high) THEN
        ABORT("Out of Bounds error in RANGE() function");
    END

    IF (low > 0) high+=1;

    long array_size = high - low;
    ARRAY<long> v(array_size);
    std::iota (std::begin(v), std::end(v), low);
    return v;
}
