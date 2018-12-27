
#include "../jade.hpp"

MAIN
	VAR s = "Hello World! This is JADE, splitting strings using strings delimiters! Just-for-you!";

	VAR ret = SPLIT(s,"This is|strings|,|!");

	FOR (STRING tst IN ret) DO
		PRINT(tst);
	END

	s = "Thu Dec 20 04:22:24 EST 2018";

	ret = SPLIT(s,"\\D+|\\W+");

	FOR (VAR tst IN ret) DO
		PRINT(tst);
	END	

	RETURN 0;
ENDMAIN
