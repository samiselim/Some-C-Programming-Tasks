#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x1  , x2 , x3;
    printf("Enter x1 : ");
    scanf("%d",&x1);
    printf(" \nEnter x2 : ");
    scanf("%d",&x2);
    printf(" \nEnter x3 : ");
    scanf("%d",&x3);
    if(x1>x2&&x1>x3) printf("\nX1 is The greatest number !");
    if(x2>x1&&x2>x3) printf("\nX2 is The greatest number !");
    if(x3>x1&&x3>x2) printf("\nX3 is The greatest number !");




    return 0;
}
