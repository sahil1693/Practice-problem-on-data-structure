/*Problem:
Given a linked list, return the node where the cycle begins. If there is no cycle, return null.
Try solving it using constant additional space.
Example :
Input : 
                 ______
                 |     |
                 \/    |
        1 -> 2 -> 3 -> 4
Return the node corresponding to node 3. 
*/
//Solution
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
listnode* detectCycle(listnode* s) {
    listnode *next1=s;
    listnode *curr=s;
    listnode *temp=s ;
   int flag=0;
   while(next1!=NULL&&curr!=NULL)
   {
        curr=curr->next;
        if(next1!=NULL&&next1->next!=NULL)
            next1=next1->next->next;
        else
            next1=next1->next;
        if(curr==next1)
        {
            flag=1;
            break;
        }
   }
   if(next1==NULL)
    return next1;
   flag=1;
   while(temp&&curr)
   {
        if(temp==curr)
            break;
        else
        {
            temp=temp->next;
            curr=curr->next;
        }
   }
  return temp;
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
   detectCycle(s);
   listnode *temp=detectCycle(s);
   if(temp!=NULL)
        printf("%d ",temp->data);
   else
        printf("No cycle");
    
}
