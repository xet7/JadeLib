#include <jade.hpp>

MAIN
    CLS;

    ComputerInfo info;    

    PRINT("Computer Name:\t\t",info.computername);
    PRINT("Logged On User:\t\t",info.username);
    PRINT("Default IP Address:\t",info.ip);
    PRINT("Default Interface:\t",info.iface);
    PRINT("Default MacAddress:\t",info.macaddress);
    PRINT("External IP Address:\t",info.external);
END
