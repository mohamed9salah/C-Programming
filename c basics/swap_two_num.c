/*
 ============================================================================
 Name        : EX6.c
 Author      : mohamed salah
 Description : swapping two numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
	float temp;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);

	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);
	temp= a+b;
	a= temp-a;
	b= temp-b;
	printf("\r\nafter swapping value of a= %.2f\n",a);
	printf("after swapping value of b= %.2f",b);
}
