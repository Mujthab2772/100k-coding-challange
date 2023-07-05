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
	int num,i,n,result;
	printf("Which number multiplication you want");
	scanf("%d",&num);
	printf("What is the limit");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		result=(i*num);{
			printf("%d X %d = %d\n",i,num,result);
		}
	}
	return EXIT_SUCCESS;
}
