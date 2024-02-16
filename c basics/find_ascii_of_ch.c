/*
 ============================================================================
 Name        : EX5.c
 Author      : mohamed salah
 Description : find ASCII value of character
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	int value;
	printf("Enter the character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	printf("ASCII code of %c = %d",ch,value=(int)ch);
}
