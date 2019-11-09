#include<stdio.h>

int main()
{
        int i, n, t1 = 0, t2 = 1, nextTerm;
        for (i=0;i<10;i++){
            printf("%d\t",t1);
            nextTerm = t1 + t2;
            t1=t2;
            t2=nextTerm;
        }

}
