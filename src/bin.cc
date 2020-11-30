#include "include/jade.hpp"
#ifdef linux
    #include <bits/stdc++.h>
#endif

FUNCTION STRING BIN$(long num) DO
    std::bitset< sizeof(num)*CHAR_BIT > bits( num );
    RETURN bits.to_string();
END
