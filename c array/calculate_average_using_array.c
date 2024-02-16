/*
 ============================================================================
 Name        : array_2.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float data[100];
		float avg;
		float sum=0;
		int n;
		int i=0;
		printf("enter number of data: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&n);

		for ( i=0;i<n;++i)
		{
			printf("\n%d.Enter number: ",i+1);
			fflush(stdin); fflush(stdout);
			scanf("%f",&data[i]);
		}

		for ( i=0;i<n;i++)
		{
			sum+=data[i];
		}
		avg= sum/n;
		printf("\nAverage= %.2f\n",avg);
		return 0;
}
