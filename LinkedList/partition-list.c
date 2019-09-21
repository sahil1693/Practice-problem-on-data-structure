//Problem
/*Given a linked list and a dataue x, partition it such that all nodes less than x come before nodes greater than or equal to x.
You should preserve the original relative order of the nodes in each of the two partitions.
For example,
Given 1->4->3->2->5->2 and x = 3,
return 1->2->2->4->3->5.*/

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
listnode* partition(listnode* A, int B) {
    listnode *curr=A;
    listnode *temp1=(listnode *)malloc(sizeof(listnode));
    //temp1=A;
    listnode *temp2=temp1,*prev=(listnode *)malloc(sizeof(listnode)),*prev1=prev;
    int flag=0;
    if(A==NULL||A->next==NULL)
        return A;
    while(curr)
    {
        if(curr->data<B&&flag==0)
        {
           temp1->data=curr->data;
           curr=curr->next;
           flag=1;
        }
        else if(curr->data<B)
        {
            while(curr&&curr->data<B){
            listnode *new1=(listnode *)malloc(sizeof(listnode));
            new1->data=curr->data;
            new1->next=NULL;
            temp1->next=new1;
            
            curr=curr->next;
            temp1=temp1->next;
                
            }
        }
        else{
            prev->next=curr;
            prev=prev->next;
            curr=curr->next;
        }
    }
    prev->next=NULL;
    temp1->next=prev1->next;
    //temp2=temp2->next;
    if(B==(A->data))
        temp2=temp2->next;
    return temp2;
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
  insertAtEnd(&s,2);  
  insertAtEnd(&s,1);
  insertAtEnd(&s,0);
  insertAtEnd(&s,10);
  s=partition(s,3);    //3 mean group of three 
    while(s!=NULL)
    {
        printf("%d ",s->data);
        s=s->next;
    }
}
