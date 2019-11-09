#include <stdio.h>
#include <stdlib.h>


struct node {
    int id;
    struct node *next;
    struct node *prev;

};
struct node *start = NULL;
struct node *end = NULL;

struct node *creat_node(){
  return (struct node*)malloc(sizeof(struct node));

}

void append (struct node *ele){
    if (start==NULL){

        start = ele;
        end = ele;
        ele->next=NULL;
        ele->prev=NULL;
    }else{
     end->next = ele;
     ele->next=NULL;
     ele->prev=end;
     end=ele;

    }
}
struct node *Search(int x){
    struct node *temp;
    temp=NULL;
    if(start){

        temp = start;
        while((temp!=NULL && (temp->id!=x))){


            temp = temp->next;
        }
        return temp;
    }

}

struct node *del (int x){
    struct node *temp = Search(x);
    if(temp){
        if(temp==start && temp==start){
            start = end = NULL;
        }else if(temp==start){

            start = start->next;
            start->prev=NULL;
        }else if(temp==end){
            end=end->prev;
            end->next=NULL;

        }else {
            temp->prev->next=temp->next;
            temp->next->prev=temp->prev;

        }
    }

}
void insert_node(struct node *ele){
    struct node *temp;
    temp=start;
    while(temp->id<ele->id){
        temp=temp->next;
    }
    if(temp==NULL){
        append(temp);
    }else if(temp==start){
        ele->next=start;
        ele->prev=NULL;
        start=ele;
    }else {
        temp->prev->next = ele;
        ele->prev=temp->prev;
        temp->prev=ele;
        ele->next=temp;
    }
}
int main()
{
    int *ptr;
    printf("Welcome\n\n\n\n");
    printf("Enter element :\n");
    scanf("%d",ptr);



    return 0;
}
