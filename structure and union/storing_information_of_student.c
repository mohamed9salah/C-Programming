/*
 ============================================================================
 Name        : storing_information_of_student.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct student{
	char name[50];
	int roll_num;
	float marks;
};
int main(void) {
	struct student x;
	printf("Enter information of student: \n");

	printf("Enter name: ");
	fflush(stdin); fflush(stdout);
	gets(x.name);

	printf("Enter roll number: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&x.roll_num);

	printf("Enter marks: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&x.marks);

	printf("\nDisplaying information\n");

	printf("name: %s\n",x.name);
	printf("roll number: %d\n",x.roll_num);
	printf("marks: %.2f\n",x.marks);
}
