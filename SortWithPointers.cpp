//Swapping or Sorting of array elements using pointers
#include<stdio.h>
#include<conio.h>

#define arrSize(x) (sizeof(x)/sizeof((x)[0]))//This is to determine the size of an array

int swap(int *a, int *b){
	int tmp = *a;
	*a=*b;
	*b=tmp;
}

int main(void){
	
	int inSize = 0;
	
	printf("Enter how many numbers to sort: ");
	scanf("%d",&inSize);
	int arr[inSize];
	
	for(int c = 0; c<inSize;c++){
		printf("Enter number:");
		scanf("%d",&arr[c]);
	}
	
		for(int b=0;b<10;b++){
			for(int x=0;x<arrSize(arr);x++){
				if(arr[x]<arr[x-1]){
				swap(&arr[x-1], &arr[x]);	
				}
			}
		}
	
	for(int y=0; y<arrSize(arr);y++)
		printf("%d ", arr[y]);
}
