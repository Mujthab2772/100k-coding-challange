/*
 ============================================================================
 Name        : largest.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b,c;
	printf("Enter 3 number for finding largest number");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b){
		if(a>c)
			printf("%d is largest",a);
			else
				printf("%d is largest",c);
	}
	else if(b>a){
		if(b>c)
		printf("%d is largest",b);
		else
			printf("%d is largest",c);

	}
	return EXIT_SUCCESS;
}
