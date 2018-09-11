#include "header.h"
#include <math.h>

int CheckAddition (const char* s) {
	char plus[]="+", *iplus;
	iplus=strstr(s,plus);
	if (iplus != NULL) {
		if (strlen(s)>1) {
			return -1;
		}
		else {return 1;}
	}
	else {return 0;}
}

