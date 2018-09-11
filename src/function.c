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

int CheckDivision (const char* s) {
	char slash[]="/", *islash;
	islash=strstr(s,slash);
	if (islash != NULL) {
		if (strlen(s)>1) {
			return -1;
		}
		else {return 1;}
	}
	else {return 0;}
}

int CheckExponent (const char* s) {
	char exp[]="^", *iexp;
	iexp=strstr(s,exp);
	if (iexp != NULL) {
		if (strlen(s)>1) {
			return -1;
		}
		else {return 1;}
	}
	else {return 0;}
}

int CheckRoot (const char* s) {
	char root[]="sqrt", *iroot;
	iroot=strstr(s,root);
	if (iroot != NULL) {
		if (strlen(s)>4) {
			return -1;
		}
		else {return 1;}
	}
	else {return 0;}
}

int CheckSinus (const char* s) { 
	char sinus[]="sin", *isinus;
	isinus=strstr(s,sinus);
	if (isinus != NULL) {
		if (strlen(s)>3) {
			return -1;
		}
		else {return 1;}
	}
	else {return 0;}
}

int CheckCosinus (const char* s) { 
	char cosinus[]="cos", *icosinus;
	icosinus=strstr(s,cosinus);
	if (icosinus != NULL) {
		if (strlen(s)>3) {
			return -1;
		}
		else {return 1;}
	}
	else {return 0;}
}

int CheckTangens (const char* s) { 
	char tangens[]="tg", *itangens;
	itangens=strstr(s,tangens);
	if (itangens != NULL) {
		if (strlen(s)>2) {
			return -1;
		}
		else {return 1;}
	}
	else {return 0;}
}

int CheckCotangens (const char* s) { 
	char cotangens[]="ctg", *icotangens;
	icotangens=strstr(s,cotangens);
	if (icotangens != NULL) {
		if (strlen(s)>3) {
			return -1;
		}
		else {return 1;}
	}
	else {return 0;}
}

