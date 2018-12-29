#include "include/jade.hpp"

/*
 *  generate-keywords
 *  
 *  Jade program to generate Jade Keywords.txt and Prototypes.txt files
 * 
 *  Copyright 2018, Armando I. Rivera
 *  
 *  License:  MIT
 * 
 *  Compile with:  g++ -std=c++11 -O2 -s generate-keywords.cc -o generate-keywords
*/


SUB jadeKeywordProto(STRING srcFile,STRING query, STRARRAY& sarray) DO
    REGQUERY term(query);
    STRING src(LOADFILE$(srcFile));
    std::sregex_token_iterator it(src.begin(), src.end(), term,2);

    WHILE ( it != std::sregex_token_iterator()) DO
        IF (NOT it->str().empty() && it->str() != " " ) THEN
            sarray.push_back(it->str());
        ENDIF
        it++;
    WEND
END


MAIN
    STRARRAY KEYWORDS,PROTOTYPES;

    jadeKeywordProto("include/jade.hpp", "(FUNCTION |SUB )(.+\\));", PROTOTYPES);
    jadeKeywordProto("include/jade.hpp", "(#define\\s+|typedef .+ )(\\w+\\$|\\w+)", KEYWORDS);
    jadeKeywordProto("include/jade.hpp", "(FUNCTION .+? |SUB|SUB )(\\w+|\\w+\\$)(\\(| \\().+;", KEYWORDS);

    OUTFILE keyFile("KEYWORDS.txt");
    FOR (VAR item IN KEYWORDS) DO
        keyFile << item << std::endl;
    END

    OUTFILE protoFile("PROTOTYPES.txt");
    FOR (VAR item IN PROTOTYPES) DO
        protoFile << item << std::endl;
    END    

END

