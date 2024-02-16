/*
 ============================================================================
 Name        : array_5.c
 Author      : mohamed salah
 Description :search an element in an array
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[1000];
	int i=0;
	float num;
	int n;
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
	printf("\nenter the element to be searched: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&num);
	for (i=0;i<n;i++)
	{
		if(num==a[i])
		{
			break;}
	}
	if (num==a[i])
	{
		printf("number found at the location: %d",i+1);
	}
	else
		printf("number not found");

}
