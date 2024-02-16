/*
 ============================================================================
 Name        : power.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
int power_number(int num,int n)
{
	if (n>0){
		return num*power_number(num,n-1);
	}
	else
		return 1;
}
int main(void) {
	int base,power;
	int result;
	printf("Enter base number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&base);

	printf("Enter power number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&power);
	result=power_number(base,power);
	printf("%d^%d=%d",base,power,result);
}
