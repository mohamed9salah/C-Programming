/*
 ============================================================================
 Name        : adding_two_complex_num.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct scomplex{
	float R1,R2; //R for real
	float I1,I2; //I for imaginary
};
struct scomplex Read_data(){
	struct scomplex x;
	printf("For 1st complex number: \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x.R1,&x.I1);

	printf("\nFor 2nd complex number: \n");
	printf("Enter real and imaginary respectively: ");
	fflush(stdin); fflush(stdout);
	scanf("%f %f",&x.R2,&x.I2);
	return x;
}
void Add_data(struct scomplex x){
	float sum1, sum2;
    sum1= x.R1+x.R2;
    sum2= x.I1+x.I2;
    printf("sum= %.2f+%.2f i",sum1,sum2);
}
int main(void) {
	struct scomplex x;
	x= Read_data(x);
	Add_data(x);
	return 0;
}
