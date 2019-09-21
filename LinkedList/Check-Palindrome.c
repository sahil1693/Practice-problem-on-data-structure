/*Problem:
Given a singly linked list, determine if its a palindrome. Return 1 or 0 denoting if its a palindrome or not, respectively.
Notes:
Expected solution is linear in time and constant in space.
For example,
List 1-->2-->1 is a palindrome.
List 1-->2-->3 is not a palindrome.
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
int lPalin(listnode* A) {
    listnode *curr=A;
    listnode *previous=NULL;
    listnode *next1=A;
    listnode *fast=A;
   listnode *slow=A;
   int i=0;
   while(curr)
   {
       curr=curr->next;
       i++;
   }
   while(fast&&fast->next)
   {
       slow=slow->next;
       fast=fast->next->next;
   }
   if(i%2!=0)
   curr=slow->next;
   else{
   curr=slow;
   }
   while(curr)
   {
       next1=curr->next;
       curr->next=previous;
       previous=curr;
       curr=next1;
   }
   fast=previous;
   while(fast)
   {
       if(fast->data!=A->data)
        return 0;
       fast=fast->next;
       A=A->next;
   }
   return 1;
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
   if(lPalin(s))
        printf("YES Palindrome");
   else
        printf("No, It is not palindrome");
    
}
