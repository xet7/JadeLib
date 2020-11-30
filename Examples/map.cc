#include <jade.hpp>

MAIN
    MAP<STRING,INTEGER> m  = { 
        {"third", 42}, 
        {"fourth", 88} 
    };

    m["first"] = 100;
    m["second"] = 20;

    m.insert({"fifth", 20});

    PRINT("\nKEY\tVALUE");
    FOR(VAR itr IN m) DO
        PRINT(itr.first,"\t",itr.second);
    END

    PRINT("\nKey/Value pairs in Map object: ", m.size());
END
