#include<stdio.h>

int main(void){
	
	char input[5];
	printf("Enter any word: ");
	
	scanf("%s",input);
	
	printf("%s",input);
	
	int x = sizeof(input);
	int count=0;
	
	char reverse[sizeof(input)];
	
	for(;x>0;x--){
		reverse[x] = input[count++];
		
	}
	
	printf("\nThis is reverse: %s",reverse);
	
	
	return 0;
}


