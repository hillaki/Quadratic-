/*
Project: Quadratic Equation Solution
Author: Hillary kiptoo
Date: 13/7/2022
Compiler: GCC
Language: C99
License: MIT

INPUTS ->a,b,c
OUTPUTS ->x1,x2
*/


#include <stdio.h>
#include <stdlib.h>
#include<math.h>

int main()
{
    //Variable Declaration
    int a,b,c;
    float x1,x2;

    //Capture Inputs
    printf("\tQuadratic Equation Solver!\n");
    printf("Enter the values of a,b and c:\n");
    scanf("%d%d%d",&a,&b,&c);

    //Processing/Computation
    if((b*b-4*a*c)==0)
    {
        x1=x2=-b+sqrt((b*b-4*a*c))/(2*a);
    }
    if((b*b-4*a*c)>0)
    {
        x1=(-b+sqrt(b*b-4*a*c))/(2*a);
         x2=(-b-sqrt(b*b-4*a*c))/(2*a);
    }
    if((b*b-4*a*c)<0)
    {
        printf("The equation has no roots\n");
    exit(1);
    }

    //Outputs:
    printf("The Values of x are %f and %f\n",x1,x2);
    return 0;
}
