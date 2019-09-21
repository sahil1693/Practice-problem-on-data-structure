#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
void add(struct node **s,int d)
{
    struct node *new=(struct node*)malloc(sizeof(struct node));
    new->data=d;
    new->next=*s;
    *s=new;
}
void check(struct node **s)
{
    struct node *next1=(struct node*)malloc(sizeof(struct node));
    struct node *curr=(struct node*)malloc(sizeof(struct node));
    struct node *temp=(struct node*)malloc(sizeof(struct node));
   curr=*s;
   temp=*s;
   next1=*s;
   int flag=0;
   while(next1!=NULL&&curr!=NULL)
   {
        curr=curr->next;
        if(next1!=NULL&&next1->next!=NULL)
            next1=next1->next->next;
        if(curr==next1)
        {
            flag=1;
            break;
        }
   }
   printf("%d %d",curr->data,next1->data);
   flag=1;
   while(temp&&curr)
   {
        if(temp->next==curr->next){
        
            break;}
        else
        {
            flag++;
            temp=temp->next;
            curr=curr->next;
        }
   }
   if(temp==NULL)
    printf("YULL");
   if(flag>=0)
    printf("%d",flag);
   else
   printf("Not a circular Linked list");
}
int main()
{
    struct node *s=(struct node*)malloc(sizeof(struct node));
    add(&s,3);
    add(&s,2);
    add(&s,1);
    add(&s,4);
    add(&s,5);
    add(&s,6);
    add(&s,7);
    add(&s,8);
    struct node *new=(struct node*)malloc(sizeof(struct node)); 
    struct node *head=(struct node*)malloc(sizeof(struct node));
    head=s;
    while(s!=NULL&&s->next!=NULL)
    {
        s=s->next;
    }
    s->next=head->next->next;
    check(&head);
}
