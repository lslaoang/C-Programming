#include<stdio.h>
#include<conio.h>
#include<string.h>

int main(void){
	
	char in, input[30];
	int x, a =0, b =0 ,c =0;
	
	
	printf("Enter word: ");
	scanf("%s",&input);
	
	
    for(x = 0; x<=strlen(input); x++){
   		in = input[x];
    
		switch(in){
			case 'a': //a++; break;
			case 'A': a++; break;
			
			case 'b': //b++; break;
			case 'B': b++; break; 
			
			case 'c': //c++; break; 
			case 'C': c++; break; 
			
			default: break;
		}//end of sw
	}
	
	printf("A = %d, B = %d, C = %d",a,b,c);
	
	getch();
	return 0;
}
