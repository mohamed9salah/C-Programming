/*
 ============================================================================
 Name        : EX3_2.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : find largest number between 3 numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num1,num2,num3;
	printf("Enter three numbers: \n");
	fflush(stdin); fflush(stdout);
	scanf("%f %f %f",&num1,&num2,&num2);

	if (num1>num2)
	{
		if (num1>num3)
		{
			printf("Largest number= %.2f",num1);
		}
		else
			printf("Largest number= %.2f",num3);
	}
	else if (num2>num3)
	{
		printf("Largest number= %.2f",num2);
	}
	else
		printf("Largest number= %.2f",num3);
}
