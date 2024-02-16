/*
 ============================================================================
 Name        : reverse.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
void Reverse()
{
	char c;
	scanf("%c",&c);
	if (c!= '\n')
	{
		Reverse();
		printf("%c",c);
	}
}
int main() {
	printf("Enter the sentence: ");
	fflush(stdin); fflush(stdout);
	Reverse();
	return 0;
}
