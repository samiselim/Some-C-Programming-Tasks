#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i =0 ,j=0 , x=0 , arr_size , odd=0 , even=0;
    printf("Enter Array Size :  ");
    scanf("%d",&arr_size);
    int arr[arr_size];
    printf("/nEnter Your Elements :  \n");
    for(i=0 ; i<arr_size ; i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i=0 ; i<arr_size ; i++)
        {
        if(arr[i]%2==0)
            {
                even++;
            }
        else
            {
                odd++;
            }
        }
    int arr1[even] , arr2[odd];
    for(i=0 ; i<arr_size ; i++)
        {
        if(arr[i]%2==0)
            {
                arr1[j]=arr[i];
                j++;
            }
        else
            {
                arr2[x]=arr[i];
                x++;
            }
        }
    printf("\nEven Array : \n");
    for(i = 0 ; i < even ; i++)
        {
            printf("%d\n" , arr1[i]);
        }
    printf("\nOdd Array :  \n");
    for(i = 0 ; i < odd ; i++)
        {
            printf("%d\n" , arr2[i]);
        }


    return 0;
}
