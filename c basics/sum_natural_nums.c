/*
 ============================================================================
 Name        : EX6_2.c
 Author      : mohamed salah
 Description : sum of natural numbers
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int integer;
	int sum=0;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&integer);

	for (int i=0; i<=integer;i++)
	{
		sum+=i;
	}
	printf("Sum= %d",sum);
}
