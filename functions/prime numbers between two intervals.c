/*
 ============================================================================
 Name        : prime.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int prime(int num);
int main(){
	int number1,number2;
	printf("Enter two numbers: ");
	fflush(stdin); fflush(stdout);
	scanf("%d %d",&number1,&number2);
	for (int i=number1;i<= number2;++i)
	{
		if (prime(i))
		{
			printf("%d\n",i);
		}
	}
}
int prime(int num)
{
if (num<=1)
	return 0;
for (int i=2; i< num/2;++i)
{
	if (num%i==0)
		return 0;
}
return 1;
}
