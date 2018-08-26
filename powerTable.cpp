//This program will display the power table
#include<stdio.h>
#include<conio.h>

void headingPrint(){
	printf("\t::::::::::::THE POWER TABLE:::::::::::::\n\n");
}

long power(int base, int power){
	long double product  = 1;
	int x;
	for(x = 1; x<=power; x++) product *= base; 
	return product;
}

int powerTable(int n){
	int x, y;
		for(x=1;x<=n;x++){
		for(y=1;y<=n;y++)
			if(y==1) printf("%ld",power(x,y));
			else printf("%9ld",power(x,y));	
		printf("\n");
	}//mother for
}


//main function
int main(void){
	headingPrint();
	powerTable(8);
}
