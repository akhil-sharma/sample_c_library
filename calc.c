/**
 * calc.c
 *
 * Principles of Programming Languages
 * assignment 1
 *
 * AKHIL SHARMA, CO15306, CSE
 */
#include <stdio.h>
#include <stdlib.h>
#include "utility.h"

int main(int argc, char const *argv[]){
	
	if(argc != 3){
		//shout at the user
		printf("Please enter 2 integer argument: a and b\n");
		printf("usage: ./calc a b \n");
		return -1;
	}

	int a, b;
	a = atoi(argv[1]);
	b = atoi(argv[2]);

	/*using the utility.h library to find the sum, product,
	quotient and difference*/

	printf("Sum of %i and %i is %i\n", a, b, add(a,b));
	printf("Difference of %i and %i is %i\n", a, b, subtract(a,b));
	printf("Quotient of %i and %i is %i\n", a, b, divide(a,b));
	printf("Product of %i and %i is %i\n", a, b, multiply(a,b));

	return 0;
}