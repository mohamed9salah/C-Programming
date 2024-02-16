/*
 ============================================================================
 Name        : string_1.c
 Author      : mohamed salah
 Description : enetr a string and character and check how many times that character is repeated
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char text[1000];
	int n,i;
	char ch;
	int freq=0;
	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(text);
	n=strlen(text);
	printf("Enter a character to find frequency: ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);
	for (i=0;i<n;i++)
	{
		if(ch==text[i])
		{
			freq++;
		}
	}
	printf("frequency of %c: %d",ch,freq);
}
