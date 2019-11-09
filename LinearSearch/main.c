#include <stdio.h>
#include <stdlib.h>
void Linear_Search(int *ptr, int value , int n){
    int flag=0;


    printf("\nEnter Your Array :\n");
    for(int i=0 ; i<n ; i++){
        printf("Enter Element %d :",i+1);
        scanf("%d",&ptr[i]);
    }
    for(int i=0 ; i<n ; i++){
       if(ptr[i]==value) flag++;
       else flag=0;
    }
    if(flag>0) printf("\nFound %d Times ",flag);
    else printf("Not Found");
}
int main()
{
    int n,v;
    printf("Enter Size of Array : ");
    scanf("%d",&n);
    printf("\nEnter Your Value to Search : ");
    scanf("%d",&v);
    int arr[n];
    Linear_Search(&arr,v,n);


    return 0;
}
