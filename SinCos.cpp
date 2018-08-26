#include<math.h>
#include<stdio.h>
#include<conio.h>
#define pi 3.1416

int main(void){

	int steps;
		
	printf("Enter number of steps: ");
	scanf("%d",&steps);
	
	int stpCount;
	float angle, maxDegree = 2 * pi;
	float update = maxDegree/steps;
	
	printf("The values of sin and cos.");
	printf("\n\n %s  %10s  %12s  %10s \n", "Steps","Angle","sin","cos" );
	
	for(stpCount=0; angle<=maxDegree; angle+=update, stpCount++){
		
		printf("%2d %15f %15f %15f\n", stpCount,angle, cos(angle), sin(angle));
	}
	
	printf("\n\nThe value of maxDegree is: %f ",maxDegree);

	getch();
	return 0;
}
