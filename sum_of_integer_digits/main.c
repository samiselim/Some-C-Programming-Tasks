#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int num1 ,num2 , digit , n=0 , inverse=0;
    double Power = 0;
    printf("Enter Your Integer \n");
    scanf("%d" , &num1);
    num2 = num1;

    while(num2!=0)
        {
            digit = num2 % 10 ;
            num2 =num2 /10;
            n++;
        }
    while(num1!=0)
        {
            digit = num1 % 10 ;
            num1 =num1 /10;
            Power = pow(10,(n-1));
            digit = digit*Power;
            n--;
            inverse+=digit;

        }
        printf("\nInverse Of your Number : %d" , inverse);

    return 0;
}
