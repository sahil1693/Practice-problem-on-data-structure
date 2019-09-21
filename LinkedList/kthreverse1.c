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

struct node * reversekth(struct node **s,int k)
{
    struct node *curr=*s;
    struct node *next=NULL;
    struct node *prev=NULL;
    int count=0;
    while(curr!=NULL&&count<k)
    {
        next=curr->next;
        curr->next=prev;
        prev=curr;
        curr=next;
        count++;
    }
    if(curr!=NULL)
        (*s)->next=reversekth(&next,k);
    return prev;
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
  s=reversekth(&s,4);
  while(s!=NULL)
  {
    printf("%d ",s->data);
    s=s->next;
  }
}
