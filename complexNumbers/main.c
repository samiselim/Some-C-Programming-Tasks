#include <stdio.h>
#include <stdlib.h>


struct comp{

    int com;
    int real;

};

void add(struct comp p1 , struct comp p2 , struct comp *p3){
  p3->real = p1.real+p2.real;
  p3->com = p1.com + p2.com;
}
int main()
{

    struct comp p1,p2,p3;
    printf("%d\n",sizeof(p1));

    printf("For Struct 1 : \n");
    printf("Enter Imagen Number : ");
    scanf("%d",&p1.com);
    printf("\nEnter Real Number : ");
    scanf("%d",&p1.real);

    printf("For Struct 2 : \n\n");
    printf("Enter Imagen Number : ");
    scanf("%d",&p2.com);
    printf("\nEnter Real Number : ");
    scanf("%d",&p2.real);

    add(p1,p2,&p3);
    printf("\nResult : \n ");
    printf("Imagen : %d\n ",p3.com);
    printf("Real : %d\n ",p3.real);




    printf("%d",sizeof(p1));
    return 0;
}
