/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <ctype.h>

/* This is the main function. */
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	// Validating number
	for (int i=0; argv[1][i]!='\0'; ++i) {
		if (!isdigit(argv[1][i])) {
			printf("Invalid number!\n");
			return 1;
		}
	}

	int input = atoi(argv[1]);
	printf("Sqrt of %d is %f\n",input,sqrt(input));
	printf("End of program. Exiting.\n");
	return(0);

} // end main
