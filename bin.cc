#include "include/jade.hpp"
#include <bits/stdc++.h>

FUNCTION STRING BIN$(long num) DO
    std::bitset< sizeof(num)*CHAR_BIT > bits( num );
    RETURN bits.to_string();
END
