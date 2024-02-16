/*
 ============================================================================
 Name        : string_2.c
 Author      : mohamed salah
 Description : find length of string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char text[1000];
	int length=0;

		printf("Enter a string: ");
		fflush(stdin); fflush(stdout);
		gets(text);
		while (text[length]!='\0')
		{
			length++;
		}
		printf("length of string: %d",length);
}
