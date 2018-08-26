#include<stdio.h>
#include<conio.h>

int recursiveMethod(int a){
	if(a==0) return 0;
	else if(a==1) return 1;
	else return (a *=recursiveMethod(a-1));
}

int main(void){
	int x = 15;
	printf("The factorial of %d is %d.",x,recursiveMethod(x));
}

