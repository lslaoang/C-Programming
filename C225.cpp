#include<stdio.h>

void write();

int main(){
	
	printf("Enter a line: ");
	write();
	
}

void write(){
	int c;
	if((c=getchar())!='\n')
	  write();
	putchar(c);
}
