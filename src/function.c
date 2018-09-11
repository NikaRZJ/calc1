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

char CheckExit (const char* s) {
	char quit[]="q", *iquit;
	iquit=strstr(s,quit);
	if (iquit != NULL) {
		if (strlen(s)>1) {
			return -1;
		}
		else {return 1;}
	}
	else {return 0;}
}

double Addition (void) {
	double a, b, r,res;
	printf ("Enter first number: ");
    	res=scanf ("%lg", &a);
    	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
	printf ("Enter second number: ");
    	res=0;
    	res=scanf ("%lg", &b);
	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
	r=a+b;
    return r;
}

double Subtraction (void) {
	double a, b, r,res;
	printf ("Enter first number: ");
    	res=scanf ("%lg", &a);
    	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
	printf ("Enter second number: ");
    	res=0;
    	res=scanf ("%lg", &b);
	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
    	r=a-b;
    	return r;
}

double Multiplication (void) {
	double a, b, r,res;
	printf ("Enter first number: ");
    	res=scanf ("%lg", &a);
    	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
	printf ("Enter second number: ");
    	res=0;
    	res=scanf ("%lg", &b);
	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
    	r=a*b;
    	return r;
}

double Division (void) {
	double a, b, r,res;
	printf ("Enter first number: ");
    	res=scanf ("%lg", &a);
    	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
	printf ("Enter second number: ");
    	res=0;
    	res=scanf ("%lg", &b);
	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
    	if (b==0) {printf ("Error. Division by zero is forbidden\n"); return 0;}
    	else {r=a/b; return r;}
}

double Exponent (void) {
	double a, b, r,res;
	printf ("Enter first number: ");
    	res=scanf ("%lg", &a);
    	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
	printf ("Enter second number: ");
    	res=0;
    	res=scanf ("%lg", &b);
	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
    	r=pow(a,b);
    	return r;
}

double Root (void) {
	double a, r, res;
	printf ("Enter a non-negative number: ");
    	res=scanf ("%lg", &a);
	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
	if (a<0) {printf("Error. Invalid input\n");}
	else {r=sqrt(a);}
    	return r;
}

double Sinus (void) {
	double a, r, res;
	printf ("Enter number of radians: ");
    	res=scanf ("%lg", &a);
	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
	r=sin(a);
	return r;
}

double Cosinus (void) {
	double a, r, res;
	printf ("Enter number of radians: ");
    	res=scanf ("%lg", &a);
	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
	r=cos(a);
	return r;
}

double Tangens (void) {
	double a, r, res;
	printf ("Enter number of radians: ");
    	res=scanf ("%lg", &a);
	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
	r=tan(a);
	return r;
}

double Cotangens (void) {
	double a, r, res;
	printf ("Enter number of radians: ");
    	res=scanf ("%lg", &a);
	if(res!=1) { 
		printf("Error. Invalid input\n");
		return -1;
	}
	r=1/tan(a);
	return r;
}
