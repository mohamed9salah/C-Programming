/*
 ============================================================================
 Name        : EX2_2.c
 Author      : mohamed salah
 Description : vowel or consonant alphabet
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	printf("enter an alphapet: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	if (ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U')
	{
		printf("%c is an vowel",ch);
	}
	else
		printf("%c is a consonant",ch);
}
