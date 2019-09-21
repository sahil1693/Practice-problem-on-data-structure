#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void add(struct node **s,int d)
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
void reversekth(struct node **s,int k)
{
    struct node *previous=(struct node *)malloc(sizeof(struct node));
    struct node *curr=(struct node *)malloc(sizeof(struct node));
    struct node *next1=(struct node *)malloc(sizeof(struct node));
    struct node *temp=(struct node *)malloc(sizeof(struct node));
    struct node *temp1=(struct node *)malloc(sizeof(struct node));
    curr=*s;
    previous=NULL;
    temp=curr;
    int i=0,j=1;
    while(curr!=NULL&&i<k)
    {
        next1=curr->next;
        curr->next=previous;
        previous=curr;
        curr=next1;
        i++;
        if(i==k)
        {
            i=0;
            if(j==1)
            {
                *s=previous;
                j=0;
            }
            else
            {
            temp->next=previous;
            temp=temp1;
            }
            previous=NULL;
            temp1=curr;
        }
    }
    if(j==1)
        *s=previous;
    if(j==0&&i!=0)
    {
        temp->next=previous;   
    }
}
int main()
{
  struct node *s=(struct node *)malloc(sizeof(struct node));
  add(&s,1);
  add(&s,2);
  add(&s,3);
  add(&s,4);
  add(&s,5);
  add(&s,6);
  add(&s,7);  
  add(&s,8);
  add(&s,9);
  add(&s,10);
  reversekth(&s,4);
  while(s!=NULL)
  {
    printf("%d ",s->data);
    s=s->next;
  }
}
