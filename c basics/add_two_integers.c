/*
 ============================================================================
 Name        : EX3.c
 Author      : mohamed salah
 Description : sum of two integers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num1,num2;
	int sum;
	printf("Enter two integers : \n");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&num1,&num2);
	printf("Sum: %d",sum=num1+num2);
}
