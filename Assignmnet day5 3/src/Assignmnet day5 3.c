/*
 ============================================================================
 Name        : Assignmnet.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a[10000];
	int limit,i,j,temp=0;
	puts("Enter array limit");
	scanf("%d",&limit);

	printf("Enter array value");
	for(i=0;i<limit;i++){
		scanf("%d",&a[i]);
	}

     for(i=0;i<limit-1;i++){
    	 for(j=i+1;j<limit;j++){
    		 if(a[i]<a[j]){
    			 temp=a[i];
    			 a[i]=a[j];
    			 a[j]=temp;
    		 }
    	 }
     }

     printf("Sorted array=");
     for(i=0;i<limit;i++){
    	 printf("%d  ",a[i]);
     }

	return EXIT_SUCCESS;
}
