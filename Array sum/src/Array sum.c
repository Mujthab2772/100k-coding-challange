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
	int a[1000];
	int i,limit,sum=0;
	printf("Enter array limit");
	scanf("%d",&limit);
	printf("Enter array values");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}

	for(i=0;i<limit;i++){
		sum=sum+a[i];
	}

	printf("Entered values sum :%d",sum);

	return EXIT_SUCCESS;
}
