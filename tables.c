#include<stdio.h>
#include<stdlib.h>
#include<math.h>//standard header files
#include"header1.h"//header filer specific to the program

void tables(int a)
{
	printf("----------------------------------------------------------\n");
	printf("Is printed using a second file\n");
	for (int i=1;i<=tabletimes;i++)
    {
        printf("%d X %d = %d\n",a,i,a*i);
    }
    leap(leapcheck);//defined in header file
}