#include "include/jade.hpp"


SUB COPYFILE ( STRING src_file, STRING dest_file ) DO
    IF (EXIST(src_file)) THEN
        std::ifstream source( src_file, std::ios::binary );
        std::ofstream dest( dest_file, std::ios::binary );
        dest << source.rdbuf();
    ELSE
        ABORT("The File '" + src_file + "' Does not exist");
    END
END

