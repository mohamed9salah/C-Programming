/*
 ============================================================================
 Name        : array_1.c
 Author      : mohamed salah
 Description : sum of 2 matrix 2*2
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[2][2];
	float b[2][2];
	float sum[2][2];

	printf("enter the elements of 1st matrix\n");

	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			printf("a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}

	}

	printf("enter the elements of 2nd matrix\n");
	for (int i=0;i<2;i++)
		{
			for (int j=0;j<2;j++)
			{
				printf("b%d%d: ",i+1,j+1);
				fflush(stdin);fflush(stdout);
				scanf("%f",&b[i][j]);
			}

		}



	for (int i=0;i<2;i++)
	{
		for (int j=0;j<2;j++)
		{
			sum[i][j]=a[i][j]+b[i][j];
			printf("%.2f ",sum[i][j]);
		}
           printf("\n");
	}


}
