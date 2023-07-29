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
	char name[100];
	int i,value,flag=0;
	printf("Type a palindrome word");
	scanf("%s",name);
	value=strlen(name);
	for(i=0;i<value;i++){
		if(name[i]!=name[value-i-1]){
			flag++;
			break;
		}
	}if(flag==0){
		printf("%s is a palindrome",name);
	}else{
		printf("%s is not palindrome",name);
	}

	return EXIT_SUCCESS;
}
