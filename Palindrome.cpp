#include<stdio.h>
#include<conio.h>
#include<string.h>


int main(void){
	
	char word[100];
	char revWord[100];	
	
	printf("Enter any word: ");
	gets(word);
	
	strcpy(revWord,word);
	strrev(revWord);
	
	if(strcmp(word,revWord)==0){
		printf("The word %s is palindrome! ", word);
	}
	else{
		printf("The word %s is not Palindrome", word);
	}
	
	getch();
	return 0;
}
