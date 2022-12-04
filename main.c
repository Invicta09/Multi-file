#include<stdio.h>
#include<stdlib.h>
#include<math.h>//standard header files
#include"header1.h"//header filer specific to the program

int main(void)
{

	tables(tableof);//calling a fucntion in second file

}

void armstrong(int n)
{
	printf("----------------------------------------------------------\n");
	printf("present in main file printed using call from prime file\n");
	int arm,r;
	int n1=n;
   //checking if the number is an armstrong number
   while(n!=0)
   {
       r=n%10;
       arm =arm+(r*r*r);
       n/=10;
   }
   
  if(arm==n1)
  {
      printf("The number %d is an armstrong number!",n1);
  }
  else
  {
      printf("The number %d is not an armstrong number.",n1);
  }
}