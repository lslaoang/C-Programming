#include<stdio.h>
#include<conio.h>

int main(void){
	int arr[] = {1,52,45,85,98};
	int *x ,*y;
	y = &arr;
	x = y+1;
	void *wala = 1999;
	char *ch = "asd";
	double *d;
	
	//wala = &x;
	
		
	printf("Address of x is: %X\n",&x);
	printf("Address of y is: %d\n",&y);
	printf("Address of arr is: %d\n\n",&arr);
	
	printf("Value of y is: %d\n",*y);	
	printf("Value of x is: %d\n\n",*(y+0));
	
	printf("Size of pointer x which is int is : %d\n",sizeof(*x));
	printf("Size of pointer wala which is void is : %d\n",sizeof(*wala));
	printf("Size of pointer ch which is character is : %d\n",sizeof(*ch));
	printf("Size of pointer d which is double is : %d\n\n",sizeof(*d));
	
	putchar('\n');
	printf("Size of pointer x which is int is : %d\n",sizeof(x));
	printf("Size of pointer wala which is void is : %d\n",sizeof(wala));
	printf("Size of pointer ch which is character is : %d\n",sizeof(ch));
	printf("Size of pointer d which is double is : %d\n\n",sizeof(d));
	
	printf("Size of array element : %d\n",sizeof(arr)/sizeof(int));
	printf("Size of array : %d\n",sizeof(arr));
}
