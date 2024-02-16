/*
 ============================================================================
 Name        : reverse_with_pointer.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str[100];
	char revstr[100];
	char *pstr=str;
	char *prevstr=revstr;
	int i=0;
	printf("Enter string: ");
	fflush(stdin); fflush(stdout);
	gets(str);

	while(*pstr){
		pstr++;
		i++;
	}

	while(i>=0){
		pstr--;
		*prevstr=*pstr;
		prevstr++;
		--i;
	}
	*prevstr='\0';
	printf("Reverse of the string is: %s",revstr);
	return 0;
}
