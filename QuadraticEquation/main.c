#include <stdio.h>
#include <stdlib.h>

int main()
{
   float a, b, c ;
   printf("Enter values of a,b and c for quadratic equation (ax^2 + bx +c) : ");
   printf("\na = ");
   scanf("%f" , &a);

   printf("\nb = ");
   scanf("%f" , &b);

   printf("\nc = ");
   scanf("%f" , &c);


   float x1,x2;
   printf("\nSolution for your Equation :");
    x1 = (-b+sqrt((b*b-4*a*c)))/(2*a);
    x2 = (-b-sqrt((b*b-4*a*c)))/(2*a);
   printf("\nRoot 1 = : %.2f",x1);
   printf("\nRoot 2 = : %.2f",x2);


    return 0;
}
