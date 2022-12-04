#include<stdio.h>
#include<stdlib.h>
#include<math.h>//standard header files
#include"header1.h"//header filer specific to the program


void leap(int year)
{
	int a,b,c;
	printf("----------------------------------------------------------\n");
	printf("Printed using a third file\n");//called from the second file
	a=year%400;
    b=year%100;
    c=year%4;
    if(a==0 || b!=0 && c==0)
     printf("It is a leap year\n");
    else
     printf("%d is not a leap year\n",year) ;
    

    armstrong(armcheck); //function in main file

}