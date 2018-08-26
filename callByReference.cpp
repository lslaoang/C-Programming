//This program will differentiate the call-by-reference and 
// call-by-value type of function
//Typical call-by-value is sometimes risky when calling a function
#include<stdio.h>
#include<conio.h>

int swap(int *x, int *y){
	int tmp = *x;
	*x=*y;
	*y=tmp;
}

int main(){
	
	int x =1; int y = 4;
	int arr[2] ={2,4};
	printf("Value of arr[0] = %d, value of arr[1] = %d\n", arr[0],arr[1]);
	swap(&arr[0],&arr[1]);
		printf("Value of arr[0] = %d, value of arr[1] = %d\n", arr[0],arr[1]);
	
	printf("Value of x = %d, value of y = %d\n", x,y);
	swap(&x,&y);
	
	printf("Value of x = %d, value of y = %d\n", x,y);
}
