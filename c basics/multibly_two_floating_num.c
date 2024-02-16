/*
 ============================================================================
 Name        : EX4.c
 Author      : mohamed salah
 Description : sum of two float numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2;
		float sum;
		printf("Enter two integers : \n");
		fflush(stdin); fflush(stdout);
		scanf("%f %f",&num1,&num2);
		printf("Sum: %f",sum=num1+num2);
}
