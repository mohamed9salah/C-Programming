/*
 ============================================================================
 Name        : array_3.c
 Author      : mohamed salah
 Description : transpose of matrix
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float a[100][100];
	float b[100][100];
	int i,j;
	int row,col;
	printf("enter rows and columns of matrix: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&row,&col);
	printf("Enter elements of matrix:\n");
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("Enter element a%d%d: ",i+1,j+1);
			fflush(stdin);fflush(stdout);
			scanf("%f",&a[i][j]);
		}
	}
	printf("Entered matrix:\n");
	for (i=0;i<row;i++)
	{
		for(j=0;j<col;j++)
		{
			printf("%2.2f ",a[i][j]);
		}
		printf("\n");
	}
	for (i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			b[i][j]=a[j][i];
		}
	}
	printf("transpose of matrix: \n");
	for (i=0;i<col;i++)
	{
		for(j=0;j<row;j++)
		{
			printf("%2.2f ",b[i][j]);
		}
		printf("\n");
	}

	return 0;

}
