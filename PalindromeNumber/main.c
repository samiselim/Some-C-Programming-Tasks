#include <stdio.h>
#include <stdlib.h>

int main()
{
    int x, rev =0;
    printf("Enter your Number : ");
    scanf("%d",&x);
    int t = x;
    while(t!=0){
        rev = rev *10;
        rev = rev + t%10;
        t=t/10;
    }
    if(rev==x){
        printf("Number is Palindrome ");
    }else{
        printf("Number isn't Palindrome ");
    }
    return 0;
}
