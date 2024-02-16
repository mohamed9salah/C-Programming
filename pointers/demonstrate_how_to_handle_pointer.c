/*
 ============================================================================
 Name        : demonstrate_how_to_handle_pointer.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int m;
	m=29;
	int *p_1;
	p_1=&m;
	printf("Address of m: %p\n",p_1);
	printf("Value of m is: %d\n",*p_1);

	printf("Now ab is assigned with the address of m\n");
	//int** ab=&p_1;
	int* ab=&m;
	printf("Address of pointer ab: %p\n",ab);
	printf("Value of m is: %d\n",*ab);
	m=34;
	printf("The value of m is assigned to 34 now\n");
	printf("Address of pointer ab: %p\n",ab);
    printf("Value of m is: %d\n",*ab);
}
