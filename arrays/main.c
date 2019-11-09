#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n ;
    printf("Enter size of array  : \n");
    scanf("%d",&n);

    int arr[n] , value , flag=0 ;

    printf("Your Elements : \n");
    for(int i =0 ; i<n ; i++){
        scanf("%d",&arr[i]);
    }
    printf("Enter your value : ");
    scanf("%d",&value);
 int max=arr[0];
       int min=arr[0];
    for(int i =0 ; i<n ; i++){
        if (value == arr[i]) flag++;

        if (arr[i]>=max){
            max=arr[i];
        }
        if (arr[i]<min){

            min=arr[i];
        }
    }
    if(flag == 0) printf("Value not Exists ");
    else printf("Value Exists %d times",flag);

    printf("\nMaximum value is : %d",max);
    printf("\nMinimum value is : %d",min);


    return 0;
}
