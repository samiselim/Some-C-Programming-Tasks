#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , j , y , temp , arr_size ,  element ,  position;
    printf("Enter Arr_size : ");
    scanf("%d",&arr_size);
    int arr[arr_size];
    printf("\nEnter Your Elements : \n");
    for(i = 0 ; i<arr_size ; i++)
        {
            scanf("%d",&arr[i]);
        }

    printf("Enter Your Element \n");
    scanf("%d",&element);
    printf("Enter Your Position \n");
    scanf("%d",&position);


    for(i = 0 ; i<arr_size ; i++)
        {
            if((position >= arr_size) || (position < 0))
                {
                    printf("Error ! Please Enter Valid Position  .. ");
                    break;
                }
            else if(i == position)
                {
                    break;
                }
        }
      if(position == i )
        {
            for(i = arr_size ; i>=position ; i--)
                {
                    arr[i] = arr[i-1];
                }
            arr[position] = element;
            printf("Your New Array is : \n");
            for(i = 0 ; i <= arr_size ; i++)
                {
                    printf("Element [%d] = %d\n" , i+1 ,arr[i] );
                }
        }

    return 0;
}




