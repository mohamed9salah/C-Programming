/*
 ============================================================================
 Name        : string_3.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char text[1000];
	char reversedtext[1000];
	int n,i;

	printf("Enter a string: ");
	fflush(stdin); fflush(stdout);
	gets(text);

	n=strlen(text);

	for (i=0;i<n;i++)
	{
		reversedtext[i]=text[n-1-i];
	}
	reversedtext[n]='\0';
	printf("reversed text : %s",reversedtext);
}
