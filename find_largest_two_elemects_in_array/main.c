#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i = 0 , j = 0 ,arr_size , temp;
    printf("Enter Size Of Array :  ");
    scanf("%d",&arr_size);
    int arr[arr_size];
    printf("\nEnter Elements Of Array : \n");
    for(i = 0 ; i < arr_size ; i++)
        {
            scanf("%d",&arr[i]);
        }
    for(i = 0; i < arr_size ; i++)
        {
            for(j=0 ; j<arr_size ; j++)
                {
                    if(arr[i]<arr[j])
                        {
                            temp = arr[j];
                            arr[j]=arr[i];
                            arr[i]=temp;
                        }
                }
        }
        printf("Your Array :  \n");
    for(i = 0 ; i < arr_size ; i++)
        {
            printf("%d\n",arr[i]);
        }
    printf("\nThe Largest Two Numbers in array are : %d  And  %d " , arr[arr_size-1] , arr[arr_size-2] );
    return 0;
}
