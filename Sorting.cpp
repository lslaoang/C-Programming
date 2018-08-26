#include<stdio.h>

int sortNum(int size){
	
	int array[size];
	int x = 0, a=0,b,c =0;
	while(size!=0){
		printf("Enter value: ");
		scanf("%d",&array[x]);
		size--; x++;
	}
	
	for(a=0;a<size;a++){
		for (b = 0; b < (size - a - 1); b++){
            if (array[b] > array[b + 1]){
//                temp = array[j];
//                array[j] = array[j + 1];
//                array[j + 1] = temp;
                
                array[a] = (array[a]+array[b]);
                
                array[b] = (array[a] - array[b]);
                array[a] = (array[a] - array[b]);
			}
		}
	}
	
	printf("The sorted array is: ", array[c]);
	
	for(c=0;c<size;c++){
		printf("%d ",array[c]);
	}
	
}//end of function sortNum


int main(void){
	int in;
	
	printf("Enter array size: ");
	scanf("%d",&in);
	
	sortNum(in);

	return 0;
}


