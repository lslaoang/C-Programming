#include<stdio.h>
#include<conio.h>

int main(void){
	
	int in =0, x, y, z;
	
	printf("Enter number of rows: ");
	scanf("%d", &in);
	
//	printf("%d",in);
	
	for(x = 1; x <= in; x++){
		
		for(y = (in-x);y>=1; y--)
			printf(" ");		
		
		for(z=1; z<=(x*2)-1;z++)
			printf("*");
				
		printf("\n");
	}//mother for
	getch();
	return 0;
}
