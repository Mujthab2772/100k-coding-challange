/*
 ============================================================================
 Name        : large.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number1,number2;
	printf("Enter 2 number");
	scanf("%d%d",&number1,&number2);
	if(number1>number2){
		printf("Greatest number is %d",number1);
	}else{
		printf("Greatest number is %d",number2);
	}
	return EXIT_SUCCESS;
}
