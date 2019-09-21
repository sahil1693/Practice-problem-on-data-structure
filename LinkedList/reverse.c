#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void insertAtEnd(struct node **s,int d)
{
    struct node *new=(struct node *)malloc(sizeof(struct node));
    struct node *curr=(struct node *)malloc(sizeof(struct node));
    curr=*s;
    while(curr->next!=NULL)
    {
       curr=curr->next;
    }
    new->data=d;
    new->next=NULL;
    curr->next=new;
}
void reverse(struct node **s)
{
    struct node *previous=(struct node *)malloc(sizeof(struct node));
    struct node *curr=(struct node *)malloc(sizeof(struct node));
    struct node *next1=(struct node *)malloc(sizeof(struct node));
    previous=NULL;
    curr=*s;
    next1=curr->next;
    while(curr)
    {
        next1=curr->next;
        curr->next=previous;
        previous=curr;
        curr=next1;
    }
    *s=previous;
}
int main()
{
    struct node *s=(struct node *)malloc(sizeof(struct node));
  insertAtEnd(&s,1);
  insertAtEnd(&s,2);
  insertAtEnd(&s,3);
  insertAtEnd(&s,4);
  insertAtEnd(&s,5);
  insertAtEnd(&s,6);
  insertAtEnd(&s,7);  
  insertAtEnd(&s,8);
  insertAtEnd(&s,9);
  insertAtEnd(&s,10);
  reverse(&s);
    while(s!=NULL)
    {
        printf("%d ",s->data);
        s=s->next;
    }
}
