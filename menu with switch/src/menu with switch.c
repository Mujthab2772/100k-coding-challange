/*
 ============================================================================
 Name        : menu.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int choice;
	printf("1 for Poratta \n2 for Biriyani \n3 for fried rice \n4 for mandhi \nEnter your choice");
	scanf("%d",&choice);
	switch(choice){
	case 1:
		printf("You have selected Poratta");
		break;
	case 2:
		printf("You have selected Biriyani");
		break;
	case 3:
		printf("You have selected fried rice");
		break;
	case 4:
		printf("You have selected Mandhi");
		break;
	default:
		printf("fool,,,,,,,");
	}
	return EXIT_SUCCESS;
}
