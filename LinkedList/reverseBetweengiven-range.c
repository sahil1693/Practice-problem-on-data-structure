//Problem
/*Reverse a linked list from position m to n. Do it in-place and in one-pass.
For example:
Given 1->2->3->4->5->NULL, m = 2 and n = 4,
return 1->4->3->2->5->NULL.*/

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
listnode* reverseBetween(listnode* A, int B, int C) {
    int i=0;
    
    listnode *temp;
    listnode *temp1;
    listnode *temp2;
    listnode *in;
    listnode *curr=A;
    listnode *prev;
    int j=0;
    while(curr)
    {
        i++;
        if(i==B-1)
            temp1=curr;
        if(i==B){
            temp=curr;
            j=i;
        }
        if(i==C){
            prev=curr->next;
            in=curr;
        }
        curr=curr->next;
    }
    
    listnode *next=temp->next;
    while(temp&&B<=C)
    {
        next=temp->next;
        temp->next=prev;
        prev=temp;
        temp=next;
        C--;
    }
    if(B==1)
    {
        return prev;
    }
    temp1->next=prev;
    
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
  s=reverseBetween(s,2,7);  //2 is starting position of rotate and 7 is ending position of rotate
    while(s!=NULL)
    {
        printf("%d ",s->data);
        s=s->next;
    }
}
