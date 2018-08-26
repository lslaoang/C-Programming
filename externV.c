#include<stdio.h>
#include<conio.h>
//#include "extern.h"

extern int abc;//externalVar =0;

//int externalVar =33;
void printMe(void){
	//int externalVar =99;
	printf("%d\n",abc);
}


void redefine(){
	int externalVar=34333;
	printf("%d\n",externalVar);
}

int abc = 90;
