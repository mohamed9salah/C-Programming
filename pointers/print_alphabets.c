/*
 ============================================================================
 Name        : print_alphabets.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char alpha[27];
	int i;
	char* p;
	p=alpha;
    printf("The Alphabets are:\n");
	for (i=0;i<26;i++){
		*p=i+'A';
		p++;
		p=alpha;
		printf("%c\t",*p);
	}

}
