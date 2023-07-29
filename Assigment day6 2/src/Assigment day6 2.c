/*
 ============================================================================
 Name        : Assigment.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int multi[1000][1000],multi1[1000][1000];
	int i,j,value,sum;
	puts("Enter the size of array");
	scanf("%d",&value);


	printf("Enter the values of array1");
	for(i=0;i<value;i++){
		for(j=0;j<value;j++){
			scanf("%d",&multi[i][j]);
		}
	}
	printf("Enter the values of array2 ");
	for(i=0;i<value;i++){
		for(j=0;j<value;j++){
			scanf("%d",&multi1[i][j]);
		}
	}

	printf("sum of 2 array is :\n");
	for(i=0;i<value;i++){
		for(j=0;j<value;j++){
			sum=multi[i][j]+multi1[i][j];
			printf("%d\t",sum);
		}
		printf("\n");
	}

	return EXIT_SUCCESS;
}
