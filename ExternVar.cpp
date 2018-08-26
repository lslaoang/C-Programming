#include<stdio.h>
#include<conio.h>
#include "extern.h"


void printMe(void){
	int x = 2;
	printf("%d\n",x);
}



int main(void){
	
	int x = 2;
	printf("%d\n",x);
	
	printMe();
}
