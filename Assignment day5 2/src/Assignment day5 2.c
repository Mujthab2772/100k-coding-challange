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
	int array[1000];
	int limit,i,counteven;
	puts("Enter array limit");
	scanf("%d",&limit);

	printf("Enter array values");
	for(i=0;i<limit;i++){
		scanf("%d",&array[i]);
	}

	printf("Numbers of even number in the given array is:");

	for(i=0;i<limit;i++){
		if(array[i]%2==0)
			counteven++;

		}



	printf("%d",counteven);

	return EXIT_SUCCESS;
}
