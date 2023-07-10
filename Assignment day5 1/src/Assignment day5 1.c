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
	int array1[1000],array2[1000];
	int limit,i,temp;
	printf("Enter size of arrays");
	scanf("%d",&limit);

	printf("Enter the values of array1");
	for(i=0;i<limit;i++){
		scanf("%d",&array1[i]);
	}

	printf("Enter the values of array2");
	for(i=0;i<limit;i++){
		scanf("%d",&array2[i]);
	}

	printf("After swapping");

	printf("\nArray1:");
	for(i=0;i<limit;i++){
		temp=array1[i];
		array1[i]=array2[i];
		array2[i]=temp;
		printf("%d,",array1[i]);
	}

	printf("\nArray2:");
	for(i=0;i<limit;i++){
		printf("%d,",array2[i]);
	}
	return EXIT_SUCCESS;
}
