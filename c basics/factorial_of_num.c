/*
 ============================================================================
 Name        : EX7_2.c
 Author      : mohamed salah
 Description : Factorial of a number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int integer;
		int mul=1;
		printf("Enter an integer: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&integer);
		if (integer>0)
		{
			for (int i=1;i<=integer;i++)
			{
	             mul*=i;
			}
			printf("Factorial= %d",mul);
		}
		else
			printf("Error!!! Factorial of negative numbers does not exist");
}
