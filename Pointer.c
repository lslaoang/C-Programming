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
	
	int c;
	for(c = 0; c<inSize;c++){
		printf("Enter number:");
		scanf("%d",&arr[c]);
	}
		int b;
		for(b=0;b<10;b++){
			int x;
			for(x=0;x<arrSize(arr);x++){
				if(arr[x]<arr[x-1]){
				swap(&arr[x-1], &arr[x]);	
				}
			}
		}
	int y;
	for(y=0; y<arrSize(arr);y++)
		printf("%d ", arr[y]);
}
