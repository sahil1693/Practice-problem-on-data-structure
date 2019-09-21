/*Problem:
Given a sorted linked list, delete all nodes that have duplicate numbers, leaving only distinct numbers from the original list.
For example,
Given 1->2->3->3->4->4->5, return 1->2->5.
Given 1->1->1->2->3, return 2->3.
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
listnode* deleteDuplicates(listnode* start) {
    listnode* dummy = (listnode *)malloc(sizeof(listnode)); 
    dummy -> next = start; 
    listnode* prev = dummy; 
    listnode* current = start; 
  
    while(current != NULL) 
    { 
        while(current -> next != NULL && prev -> next -> data == current -> next -> data) 
            current = current -> next; 
        if (prev -> next == current) 
            prev = prev -> next; 
          else
            prev -> next = current -> next; 
  
        current = current -> next; 
    }   
    start = dummy -> next; 
    return start;
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
   struct node*temp= deleteDuplicates(s);
   while(temp)
   {
    printf("%d",temp->data);
    temp=temp->next;
   }
}
