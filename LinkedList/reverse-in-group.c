//Problem
/*Given a singly linked list and an integer K, reverses the nodes of the
list K at a time and returns modified linked list.
 NOTE : The length of the list is divisible by K 
Example :
Given linked list 1 -> 2 -> 3 -> 4 -> 5 -> 6 and K=2,
You should return 2 -> 1 -> 4 -> 3 -> 6 -> 5
Try to solve the problem using constant extra space.*/

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
listnode* reverseList(listnode* A, int k) {
    listnode *previous=NULL;
    listnode *curr=A;
    listnode *next1=(struct node *)malloc(sizeof(struct node));
    listnode *temp=curr;
    listnode *temp1=(struct node *)malloc(sizeof(struct node));
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
                A=previous;
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
        A=previous;
    if(j==0&&i!=0)
    {
        temp->next=previous;   
    }
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
  s=reverseList(s,3);    //3 mean group of three 
    while(s!=NULL)
    {
        printf("%d ",s->data);
        s=s->next;
    }
}
