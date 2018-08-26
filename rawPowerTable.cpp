#include<stdio.h>
#include<conio.h>

#define N 8

int power(int base, int exp){
	long result = base;
	while(exp>1){
		 result *= base;
		exp--;
	} 	
	return result;
}	

long powerTable(int n){
  long count,exp;
 	for(count =1;count<=n;count++){
 		for(exp=1;exp<=n;exp++){
 			if(exp==1)
				printf("%ld ",power(count,exp));
			 else
 				printf("%10ld ",power(count,exp));
 		}
 	printf("\n");
	}
}

int main(){
	powerTable(N);	
}
