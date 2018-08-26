#include<stdio.h>
#include<conio.h>

int main(void){
	
	int arr[] = {1,52,45,85,98};
	int *x;
	
	int *array[4];

	
	int a;
	for(a=1;a<=3;a++){
		
		array[a] = &arr[a];
	}
	
	putchar('\n');

	int *xx = NULL;
	for(a=0;a<=3;a++){
		printf("%d %d\n",array[a],arr[a]);
	}
	
}

