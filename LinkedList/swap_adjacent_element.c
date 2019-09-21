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
void swap(struct node **s)
{
    if((*s)==NULL||(*s)->next==NULL)
       {}
    else{
    struct node *next1=(struct node*)malloc(sizeof(struct node));
    struct node *curr=(struct node*)malloc(sizeof(struct node));
    struct node *previous=(struct node*)malloc(sizeof(struct node));
    curr=(*s)->next->next;
    previous=*s;
    *s=(*s)->next;
    (*s)->next=previous;
    int i=0;
    while(curr!=NULL&&curr->next!=NULL)
    {
        previous->next=curr->next; //200 300 400
        previous=curr;  //300 100 200
        next1=curr->next->next;
        curr->next->next=curr;       //100  200 
        curr=next1;
        curr=next1;    //200   300   
    }
    previous->next=curr;}
}
int main()
{
    struct node *s=(struct node*)malloc(sizeof(struct node));
    /*adding element at starting*/
    add(&s,3);
    add(&s,2);
    add(&s,1);
    add(&s,4);
    add(&s,5);
    //swap(&s);
    while(s!=NULL)
    {
        printf("%d",s->data);
        s=s->next;
    }
}
