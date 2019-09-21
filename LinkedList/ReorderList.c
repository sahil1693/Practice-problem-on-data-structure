//Problem
/*Given a singly linked list
  L: L0 → L1 → … → Ln-1 → Ln,
reorder it to:
    L0 → Ln → L1 → Ln-1 → L2 → Ln-2 → …
You must do this in-place without altering the nodes’ values.
For example,
Given {1,2,3,4}, reorder it to {1,4,2,3}.*/

#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node listnode;
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
listnode* reorderList(listnode* A) {
    listnode *curr=A;
    if(A==NULL||A->next==NULL||A->next->next==NULL)
        return A;
    int count=0;
    while(curr)
    {
        count++;
        curr=curr->next;
    }
    count=(count+1)/2;
    curr=A;
    while(curr&&count-1)
    {
        curr=curr->next;
        count--;
    }
    
    listnode *temp=curr->next;
    curr->next=NULL;
    curr=A;
    listnode *prev=NULL;
    listnode *curr1=temp;
    listnode *next;
    while(curr1)
    {
        next=curr1->next;
        curr1->next=prev;
        prev=curr1;
        curr1=next;
    }
    temp=prev;
    listnode *next1;
    while(curr&&curr->next)
    {
        next=curr->next;
        curr->next=temp;
        next1=temp->next;
        curr=curr->next;
        prev=curr;
        curr->next=next;
        curr=curr->next;
        temp=next1;
    }
    if(temp!=NULL)
        prev->next->next=temp;
    return A;
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
  s=reorderList(s); 
    while(s!=NULL)
    {
        printf("%d ",s->data);
        s=s->next;
    }
}
