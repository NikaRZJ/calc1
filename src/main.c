#include "header.h"

int main () {
	
	char o[6];
	double r;	
	while (1){
    		printf ("Enter operation: ");
    		scanf ("%s", o);
    		if (CheckExit (o)==1) {
			printf ("Quit\n");
			break;
		}
		r=Calc(o);
		printf ("Result: %lg\n", r); 
		printf ("\n");
		fflush (stdin);
    	}
	return 0;
}
