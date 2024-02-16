/*
 ============================================================================
 Name        : EX5_2.c
 Author      : mohamed salah
 Description : check the character is alphabet or not
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	printf("Enter a character: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	if ((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
	{
		printf("%c is an alphabet",ch);
	}
	else
		printf("%c is not an alphabet",ch);

}
