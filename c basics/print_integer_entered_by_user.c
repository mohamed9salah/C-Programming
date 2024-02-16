/*
 ============================================================================
 Name        : EX2.c
 Author      : mohamed salah
 Description : print an integer entered by user
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int integer;
	printf("Enter an integer: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&integer);
	printf("You entered: %d\n",integer);
}
