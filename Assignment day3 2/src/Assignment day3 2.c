/*
 ============================================================================
 Name        : Assignment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float totalmark;
	printf("Enter your subject mark here?");
	scanf("%f",&totalmark);
	if(totalmark>89 &&totalmark<101){
		printf("A grade");
	}else if(totalmark>79 &&totalmark<90){
		printf("B grade");
	}else if(totalmark>69 &&totalmark<80){
		printf("C grade");
	}else if(totalmark>59&&totalmark<70){
		printf("D grade");
	}else if(totalmark>49&&totalmark<60){
		printf("E grade");
	}else if(totalmark<50&&totalmark>0){
		printf("You failed");
	}else{
		printf("Not allowed...");
	}
	return EXIT_SUCCESS;
}
