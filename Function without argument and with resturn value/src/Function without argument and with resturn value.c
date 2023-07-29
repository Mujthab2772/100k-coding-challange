/*
 ============================================================================
 Name        : Function.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int sum();
int main(void) {
	int k;
	k=sum();
	printf("Enter number sum is %d",k);
	return EXIT_SUCCESS;
}

int sum(){
	int a,b,c;
	printf("Enter 2 numbers");
	scanf("%d%d",&a,&b);
	c=a+b;
	return c;
}
