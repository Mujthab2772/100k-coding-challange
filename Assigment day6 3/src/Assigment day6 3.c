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

void getarray(int[],int);
void displayArray(int[],int);
int main(void) {
	int size;
	printf("Enter array size");
	scanf("%d",&size);
	int arr[size];
	int *p=arr;
	getarray(p,size);
	displayArray(p,size);

	return EXIT_SUCCESS;
}
void getarray(int array[],int size){
	int i;
	printf("Enter the values");
	for(i=0;i<size;i++){
		scanf("%d",&array[i]);
	}
}
void displayArray(int array[],int size){
	int i;
	printf("Entered value is : ");
	for(i=0;i<size;i++){
		printf("%d\t",array[i]);
	}
}


