/*
 ============================================================================
 Name        : EX7.c
 Author      : mohamed salah
 Description : swapping two numbers without temp variable
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a,b;
	printf("Enter value of a: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&a);

	printf("Enter value of b: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&b);

	b= a+b;     // we can use division and multiplication too!
	a= b-a;     // b= b*a , a= b/a, b=b/a
	b= b-a;

	printf("\r\nValue of a after swapping = %.2f\n",a);
	printf("Value of b after swapping = %.2f\n",b);

}
