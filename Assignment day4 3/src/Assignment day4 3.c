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
	int limit,i,j,k;
	printf("Enter a number");
	scanf("%d",&limit);
	for(i=1;i<=limit;i++){
		for(j=1;j<=i;j++){
			for(k=j;k<=j;k++){
				printf("%d ",k);
			}
		}

		printf("\n");
	}


	return EXIT_SUCCESS;
}
