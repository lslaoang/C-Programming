#include<stdio.h>

int main(){
	extern int a,b,c;
	
	printf("%d %d %d",a,b,c);
	
}

int a=5, b=a, c=b;
