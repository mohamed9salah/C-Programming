/*
 ============================================================================
 Name        : EX1_2.c
 Author      : mohamed salah
 Description : even or odd
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int num;
	printf("Enter an integer you want to check: ");
	fflush(stdout); fflush(stdin);
	scanf("%d",&num);
	(num%2==0)? printf("%d is even.",num): printf("%d is odd. ",num);
}
