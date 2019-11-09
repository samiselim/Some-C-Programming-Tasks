#include <stdio.h>
#include <stdlib.h>
int fac(int x){
    if (x==1) return 1;
    else
        return x*fac(x-1);

}
int main()
{

   int x ,f = 1;
   printf("Enter Your Number : \n ");
   scanf("%d",&x);

/*  for (int i = 1 ; i<=x ; i++){
    f=f*i;
   }
   printf("%d",f);
*/


   printf("%d",fac(x));

    return 0;
}
