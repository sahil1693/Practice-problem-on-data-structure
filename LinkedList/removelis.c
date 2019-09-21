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
//0 1 2 3 3 4 5 6 7 7 9 10
void remove1(struct node **s)
{
    struct node *previous=(struct node *)malloc(sizeof(struct node));
    struct node *curr=(struct node *)malloc(sizeof(struct node));
    
    curr=(*s)->next;
    struct node *temp=curr;
    while(curr!=NULL)
    {
        while(curr&&curr->next)
        {
            if(curr->data==curr->next->data)
                curr->next=curr->next->next;
            else
                break;
        }  
        curr=curr->next;
    }
    *s=temp;
}
int main()
{
  struct node *s=(struct node *)malloc(sizeof(struct node));
  add(&s,1);
  add(&s,3);
  add(&s,3);
  add(&s,3);
  add(&s,5);
  add(&s,5);
  add(&s,5);  
  add(&s,7);
  add(&s,9);
  add(&s,9);
 remove1(&s);
  while(s!=NULL)
  {
    printf("%d ",s->data);
    s=s->next;
  }
}
