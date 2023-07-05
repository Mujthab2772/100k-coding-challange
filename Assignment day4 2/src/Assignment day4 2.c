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
	int num,i,sum;
	printf("Enter a limit");
	scanf("%d",&num);
	for(i=1;i<=num;i++){
		if(i%2==1)
		sum=sum+i;}
	{
		printf("Sum of odd number = %d",sum);
	}
	return EXIT_SUCCESS;
}
