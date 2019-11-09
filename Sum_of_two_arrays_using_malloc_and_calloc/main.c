#include <stdio.h>
#include <stdlib.h>

int main()
{

    int *A , *B , *C ,n , i;
    printf("Enter Array 1 , 2 And 3  Size  : \n");
    scanf("%d" , &n);

    A = (int * )malloc(n*sizeof(int));
    B = (int * )malloc(n*sizeof(int));
    C = (int * )malloc(n*sizeof(int));
    printf("\n");
    for(i = 0 ; i< n ; i++)
        {
           A[i] = i+1;
           *(B+i) = i*2;
        }

    for(i = 0 ; i< n ; i++)
        {
            C[i] = A[i] + B[i];
            printf("%d  +  %d  =  %d \n" , A[i] , B[i] , C[i]);
        }
        free(A);
        free(B);

    return 0;
}
