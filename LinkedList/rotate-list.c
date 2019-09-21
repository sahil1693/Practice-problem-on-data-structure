//Problem:
/*
Given a list, rotate the list to the right by k places, where k is non-negative.
For example:
Given 1->2->3->4->5->NULL and k = 2,
return 4->5->1->2->3->NULL.
*/

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
listnode* rotateRight(listnode* A, int B) {
    int i=0,j=0;
    listnode *c=A;
    listnode *curr=A;
    while(c)
    {
        c=c->next;
        j++;
    }
    if(j==1||(B%j==0))
        return A;
    B=B%j;
    B=B+1;
    j=j-B;
    for( i=0;i<j;i++)
        curr=curr->next;
    listnode *temp=curr->next;
    curr->next=NULL;
    listnode *cur=temp;
    while(cur&&cur->next)
        cur=cur->next;
    cur->next=A;
    A=temp;
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
  s=rotateRight(s,3); //where 3 is no of rotation of
    while(s!=NULL)
    {
        printf("%d ",s->data);
        s=s->next;
    }
}
