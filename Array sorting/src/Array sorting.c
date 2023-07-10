/*
 ============================================================================
 Name        : Array.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int sort[1000];
	int limit,i,j,temp;
	printf("Enter array limit");
	scanf("%d",&limit);

	printf("Enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&sort[i]);
	}



	for(i=0;i<limit-1;i++){
		for(j=i+1;j<limit;j++){
			if(sort[i]>sort[j]){
				temp=sort[i];
				sort[i]=sort[j];
				sort[j]=temp;
			}
		}
	}

	printf("Sorted values:");

	for(i=0;i<limit;i++){
		printf("%d  ",sort[i]);
	}


	return EXIT_SUCCESS;
}
