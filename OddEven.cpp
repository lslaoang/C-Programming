#include<stdio.h>


int main(void){
	
	int input;
	
	printf("Enter number: ");
	scanf("%d",&input);
	
	if(input%2==0){
		printf("\nThe number %d is even.",input);
	}
	else{
		printf("\nThe number %d is odd.",input);
	}
	
	return 0;
	
}
