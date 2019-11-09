#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i , n , position;
    printf("Enter Size Of your Array :D ");
    scanf("%d" , &n);
    int arr[n];
    printf("\nEnter Element Index Which You need to delete :- \n");
    scanf("%d", &position);
    printf("Enter Your Array :D\n");
    for(i = 0 ; i<n ; i++)
        {
            scanf("%d" , &arr[i]);
        }

    for(i=0 ; i<n ; i++)
        {
            if(i == position)
                {
                    arr[position] = arr[i+1];
                    position++;
                }
        }
    printf("\nYour Array After Deleting Your Element :D ");

    for(i=0 ; i<n-1 ; i++)
        {
            printf("\nElement %d is %d \n" , i , arr[i]);
        }

    return 0;
}
