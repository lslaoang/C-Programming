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
    	
    	if(in == 'a'|| in == 'A')	
			a++;
			
		if(in == 'b' || in =='B')
			b++;
			
		if(in == 'c' || in == 'C')
			c++;
	
	}
	
	printf("A = %d, B = %d, C = %d",a,b,c);
	
	getch();
	return 0;
}
