/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
   int a;
   int b;
   int c;
   int d;
   int e;
   
   printf("Pls enter the seconds");
   scanf("%d", &d);
   a = d/3600;
   c = d%3600;
   b = c/60;
   e = c%60; 
   
   printf("%d Hours, %d minutes,  %d seconds",a,b,e);
   
}
