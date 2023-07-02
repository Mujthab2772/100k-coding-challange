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
	int choice;
	printf("1 for Sunday \n2 for Monday \n3 for Tuesday \n4 for Wednesday \n5 for Thursday \n6 for Friday \n7 for Saturday \nEnter your choice");
	scanf("%d",&choice);

	switch(choice){
	case 1:
		printf("you selected Sunday");
		break;
	case 2:
		printf("you selected Monday");
		break;
	case 3:
		printf("you selected Tuesday");
		break;
	case 4:
		printf("you selected Wednesday");
		break;
	case 5:
		printf("you selected Thursday");
		break;
	case 6:
		printf("you selected Friday");
		break;
	case 7:
		printf("you selected Saturday");
		break;
	default:
		printf("Invaild Entry");
	}
	return EXIT_SUCCESS;
}
