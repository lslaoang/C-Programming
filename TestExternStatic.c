#include<stdio.h>
#include<conio.h>

int input();					
int fibonacci(int);			

int main(){	
	int seq;
	seq = input() ,fibonacci(seq);
	
getch();
return 0;
}								

int fibonacci(int sequence){	
	int x=1,y=1, s = 0;	
	
	while(s<sequence){
		printf("%d \t%6d\n",++s,x)     ,x+=y;
		
		if(s!=sequence)
			printf("%d \t%6d\n",++s,y)     ,y +=x;
	}
}

int input(){					
	int in;					
	printf("Enter sequence: ")  ,scanf("%d" ,&in);
	
	return in;
}
