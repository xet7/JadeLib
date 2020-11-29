#include <jade.hpp>
// #include <chrono>
// #include <thread>

// SUB SLEEP(INTEGER millisec) DO
//     std::this_thread::sleep_for(std::chrono::milliseconds(millisec));
// END

MAIN
    PRINT("Hello");

    SLEEP(1000);

    PRINT("Good Bye!");
END