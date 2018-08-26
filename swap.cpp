#include<stdio.h>
#include<conio.h>


void swap(int x, int y){
	
	x = x+y;
	
	y=x-y;
	x=x-y;
	
	printf("Swap result: %d %d",x,y);
}



int main(){
	
	int n1,n2;
	
	printf("Enter a number to swap: ");
	scanf("%d",&n1);
	printf("Enter second number to swap: ");
	scanf("%d",&n2);
	
	swap(n1,n2);
}
