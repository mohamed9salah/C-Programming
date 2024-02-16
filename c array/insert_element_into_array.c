/*
 ============================================================================
 Name        : array_4.c
 Author      : mohamed salah
 Description : insert an element into array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[1000];
	int i=0;
	float num;
	int n,location;
	printf("Enter number of elements: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&n);

	for (i=0;i<n;i++)
	{
		scanf("%f",&a[i]);
	}
	for (i=0;i<n;i++)
	{
		printf("%.2f ",a[i]);
	}

	printf("\nEnter the element to be inserted: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num);

	printf("Enter the location: ");
		fflush(stdin); fflush(stdout);
		scanf("%d",&location);
		for (i=n;i>=location;i--)
		{
			a[i]=a[i-1];
		}
		a[location-1]=num;
		for (i=0;i<n+1;i++)
		{
			printf("%.2f ",a[i]);
		}


}
