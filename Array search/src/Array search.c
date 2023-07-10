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
	int limit,i,searchkey,flag=0;
	printf("Enter array limit");
	scanf("%d",&limit);

	printf("Enter values");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}

	printf("Please enter search key");
	scanf("%d",&searchkey);

	for(i=0;i<limit;i++){
		if(searchkey==a[i]){
			flag=1;
			break;
		}
	}

	if(flag==1){
		printf("values found at position %d",i+1);
	}else{
		printf("value not found");
	}
	return EXIT_SUCCESS;
}
