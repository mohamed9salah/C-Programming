/*
 ============================================================================
 Name        : EX4_2.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : check whether number is positive or negative
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float num;
	printf("Enter a number: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num);

	if (num>0)
	{
		printf("%.2f is positive",num);
	}
	else if (num<0)
	{
		printf("%.2f is negative",num);
	}
	else
		printf("you entered zero!");
}
