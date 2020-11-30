#include "../include/jade.hpp"

FUNCTION STRING EXEC(STRING cmd) DO
    std::array<char, 128> buffer;
    STRING result;
    std::unique_ptr<FILE, decltype(&pclose)> pipe(popen(cmd.c_str(), "r"), pclose);

    IF (!pipe) DO
        throw std::runtime_error("popen() failed!");
    END

    WHILE (fgets(buffer.data(), buffer.size(), pipe.get()) != nullptr) DO
        result += buffer.data();
    WEND

    RETURN result;
END
