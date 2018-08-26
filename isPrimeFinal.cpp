#include<stdio.h>
#include<conio.h>

int isPrime(int input){

	int in, res, primeCount = 0;
	
	for(in=1;in<=input;in++){
		res = input%in;
			if(res==0){
				primeCount++;
				printf("%d  /  %d\n",input,in);
			}		
	}
	
	if(primeCount>2){
		printf("The number %d is composite!\n",input);
		return 0;
	}
	else{	
		printf("The number %d is prime!\n",input);
		return 1;
	}	
}


int main(){
	
	int input;
	
	printf("Enter number: ");
	scanf("%d",&input);
	
	isPrime(input);
	
	getch();
	return 0;
}
