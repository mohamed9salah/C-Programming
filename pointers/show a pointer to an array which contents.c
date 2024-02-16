/*
 ============================================================================
 Name        : pointer.c
 Author      : mohamed salah
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
struct mystruct{
	int id;
	char name[20];
};
int main(void) {
	int i=0;
	struct mystruct Smystruct[1]={{1002,"Alex"}};
	struct mystruct *pSmystruct[1];
	pSmystruct[i]=&Smystruct[i];
	for (i=0;i<1;i++){
		pSmystruct[i]=&Smystruct[i];
	}
	for (i=0;i<1;i++){
		printf("Employee id: %d\n",pSmystruct[i]->id);
		printf("Employee name: %s\n",pSmystruct[i]->name);
	}
}
