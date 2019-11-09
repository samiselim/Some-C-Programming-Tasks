#include <stdio.h>
#include <stdlib.h>

int main()
{
    char op ;
    printf("Enter the operand + , - , * or / :");
    scanf(" %c" , &op);
    float x ,y ;
    printf("Enter The first number : ");
    scanf("%f",&x);
    printf("\nEnter The second number : ");
    scanf("%f",&y);
    switch(op){
    case'+':
        printf("x+y = %.2f",x+y);
        break;
    case'*':
        printf("x*y = %.2f",x*y);
        break;
    case'-':

        printf("x-y = %.2f",x-y);
        break;
    case'/':
        printf("x/y = %.2f",x/y);
        break;
    default :
        break;



    }
    return 0;
}
