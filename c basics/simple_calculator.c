/*
 ============================================================================
 Name        : EX8_2.c
 Author      : mohamed salah
 Description : simple calculator
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char ch;
	float num1,num2;
	//float sum,mul,sub,div;
	printf("Enter operator either + or * or - or / ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&ch);

	printf("Enter two operands: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&num1,&num2);

	switch (ch){
	case '+':

		printf("%.2f + %.2f = %.2f",num1,num2,num1+num2);
	break;
	case '-':

		printf("%.2f - %.2f = %.2f",num1,num2,num1-num2);
	break;
	case '*':

		printf("%.2f * %.2f = %.2f",num1,num2,num1*num2);
	break;
	case '/':

		printf("%.2f / %.2f = %.2f",num1,num2,num1/num2);
	break;
default:
	printf("wrong choice");
	break;

}
	return 0;
}
