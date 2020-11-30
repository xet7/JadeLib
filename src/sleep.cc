#include "include/jade.hpp"

SUB SLEEP(INTEGER millisec) DO
    std::this_thread::sleep_for(std::chrono::milliseconds(millisec));
END
