/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>
#include <math.h>
int main()
{
    int s;
    int a;
    int b;
    int c;
    int A;
    int d;
    printf("Pls enter the value of a = ");
    scanf("%d",&a);
    printf("\nPls enter the value of b = ");
    scanf("%d",&b);
    printf("\nPls enter the value of c = ");
    scanf("%d",&c);
    s = (a + b + c)/2;
    printf("Semi perimeter is %d", s);
    A = s*(s-a)*(s-b)*(s-c);
    d = sqrt(A);
    printf("\nArea of the triangle %d", d);
    
}
