/*
 ============================================================================
 Name        : assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float P,R,N,SI;
	printf("Enter 3 numbers");
	scanf("%f%f%f",&P,&R,&N);
	SI=(P*R*N)/100;
	printf("Simple interest is :%f",SI);

	return EXIT_SUCCESS;
}
