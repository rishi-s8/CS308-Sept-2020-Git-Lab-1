/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>
#include <complex.h>

/* This is the main function. */
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	// Validating number
	for (int i=0; argv[1][i]!='\0'; ++i) {
		if (!isdigit(argv[1][i])) {
			if (!(i==0 && argv[1][0]=='-')) {
				printf("Invalid number!\n");
				return 1;
			}
		}
	}

	int input = atoi(argv[1]);
	if (input < 0) {
		float complex ans = csqrt(input);
		printf("Square root of %d is %.4f + %.4fi\n", creal(ans), cimag(ans));
	} else {
		printf("Square root of %d is %f\n",input,sqrt(input));
	}

	printf("End of program. Exiting.\n");
	return(0);

} // end main
