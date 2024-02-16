/*
 ============================================================================
 Name        : print.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr[15];
	int *p=arr;
	int n;
	printf("Input the number of elements to store in array (max 15): ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);
	printf("input %d numbers of elements in the array:\n",n);

	for (int i=0;i<n;i++){
		printf("element-%d",i+1);
		fflush(stdin); fflush(stdout);
		scanf("%d",p);
		p++;
	}

	//p=&arr[n-1];
	p--;
	for (int i=n;i>0;i--)
	{
		printf("element-%d=%d\n",i,*p);
		p--;
	}
	printf("\n");
}
