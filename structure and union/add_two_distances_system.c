/*
 ============================================================================
 Name        : add_two_distances_system.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct distance{
	float d1_1,d1_2; //1_1 for feet,1_2 for inch
	float d2_1,d2_2; //2_1 for feet,2_2 for inch
};
struct distance (Read_data()){
	struct distance x;

	printf("enter information of first distance: ");
	printf("\nEnter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x.d1_1);
	printf("Enter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x.d1_2);

	printf("\nenter information of second distance: ");
	printf("\nEnter feet: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x.d2_1);
	printf("nEnter inch: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x.d2_2);
	return x;
}
void add_data(struct distance x){
	float sum1,sum2;
	sum1=x.d1_1+x.d2_1;
	sum2=x.d1_2+x.d2_2;
	printf("sum of distances= %.2f, %.2f",sum1,sum2);
}
int main(void) {
	struct distance x;
	x= Read_data(x);
	add_data(x);
	return 0;
}
