#include<stdio.h>
#include<conio.h>


int main(void){
	
	int salary  = 500;
	int contribution = 30;
	int days = 3;
	
	float aveTax;
	
	aveTax = (salary - contribution)/days;
	
	printf("\nThe value of aveTax without casting is : %f\n\n",aveTax);
	
	//Typecasting applied
	aveTax = (float)(salary - contribution)/days;
	
	printf("The value of aveTax with casting is: %f\n", aveTax);

	

	

}
