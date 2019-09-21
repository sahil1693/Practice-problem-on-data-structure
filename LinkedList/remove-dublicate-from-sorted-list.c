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
listnode* deleteDuplicates(listnode* A) {
    listnode *curr=A;
    listnode *temp=curr;
    while(curr!=NULL)
    {
        while(curr&&curr->next)
        {
            if(curr->data==curr->next->data)
                curr->next=curr->next->next;
            else
                break;
        }  
        curr=curr->next;
    }
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
   struct node*temp= deleteDuplicates(s);
   while(temp)
   {
    printf("%d",temp->data);
    temp=temp->next;
   }
}
