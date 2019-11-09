#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x , rev=0;
    printf("Enter your number!\n");
    scanf("%d",&x);

    while(x!=0){
        rev = rev *10;
        rev = rev +(x%10);
        x=x/10;
    }
    printf("Reverse of number is : %d",rev);
    return 0;
}
