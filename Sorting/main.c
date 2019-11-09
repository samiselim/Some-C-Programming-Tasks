#include <stdio.h>
#include <stdlib.h>
void selection_sort(int *arr , int n){
    int position;
    for(int i=0 ; i<n-1 ; i++){
            position=i;
        for(int j=i+1;j<n;j++){
            if(arr[i]>arr[j])
                position=j;
        }
        if(position!=i){
            int swap = arr[i];
            arr[i]=arr[position];
            arr[position]=swap;
        }

    }
    printf("Array After Selection Sort :  \n");
    for(int i=0 ; i<n ; i++){
    printf("%d\n",arr[i]);
    }

}
int main()
{
    int n;
    printf("Enter Size Of Array : ");
    scanf("%d",&n);
    int arr[n];
    printf("Enter Your Elements : ");
    for(int i=0;i<n;i++){
        printf("\nEnter Element %d : ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("\nPlease Choice Your Algorithm : \n");

    printf(" press 1 for Selection Sort \n");
    printf(" press 2 for Insertion  Sort \n");
    printf(" press 3 for Merge Sort \n");
    printf(" press 4 for Quick  Sort \n");
    printf(" press 5 for Bubble Sort \n");

    int choice;
    printf("Enter Number of Wanted Algorithm : ");
    scanf("%d",&choice);
    switch(choice){
    case 1:
        selection_sort(&arr,n);
        break;
        /*
    case 2:
        insertion_sort(&arr,n);
        break;
    case 3:
        Merge_sort(&arr,n);
        break;
    case 4:
        quick_sort(&arr,n);
        break;
    case 5:
        bubble_sort(&arr,n);
        break;
        */
    default:break;
    }
    return 0;
}
