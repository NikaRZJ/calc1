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

int CheckSubtraction (const char* s) { 
	char minus[]="-", *iminus;
	iminus=strstr(s,minus);
	if (iminus != NULL) {
		if (strlen(s)>1) {
			return -1;
		}
		else {return 1;}
	}
	else {return 0;}
}

int CheckMultiplication (const char* s) {
	char star[]="*", *istar;
	istar=strstr(s,star);
	if (istar != NULL) {
		if (strlen(s)>1) {
			return -1;
		}
		else {return 1;}
	}
	else {return 0;}
}
