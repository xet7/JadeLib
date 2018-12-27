#include "../jade.hpp"

MAIN 
    PRINT(EXTRACT$("filename.bas",".bas"));
    PRINT(REMAIN$("filename.bas",".bas"));
END
