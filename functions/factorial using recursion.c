/*
 ============================================================================
 Name        : factorial.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int factorial(int n){
	if (n>0)
         return n*factorial(n-1);
	else
		return 1;
}
int main(void) {
	int num;
	printf("Enter your number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&num);
	printf("Factorial of %d is %d",num,factorial(num));

}
