#include<stdio.h>
#include<conio.h>

int main(){
	
	void *pInt, *pDouble, *pChar, *pFloat;
	
	int in = 8;
	double dou = 10.12;
	char ch = 'c';
	float fl = 8.9003;
	
	pInt = &in;
	pDouble = &dou;
	pChar = &ch;
	pFloat = &fl;
	
	
	printf("Value of int variable %d \n",*(int *)pInt);
	printf("Value of double variable %f \n",*(double *)pDouble);
	printf("Value of char variable %c \n",*(char *)pChar);
	printf("Value of float variable %f \n\n",*(float *)pFloat);
	
	printf("Value of int variable %X \n",pInt);
	printf("Value of double variable %X \n",pDouble);
	printf("Value of char variable %X \n",pChar);
	printf("Value of float variable %X \n",pFloat);
	
	
}
