#include <stdio.h>
#include<stdlib.h>
#include<stdbool.h>
struct node
{
	int data;
	struct node* next;
};
void push(struct node** n,int v)
{
	struct node* newnode=(struct node*)malloc(sizeof(struct node*));
	newnode->data=v;
	newnode->next=*n;
	*n=newnode;
}
bool isempty(struct node** n)
{
    if(*n==NULL)
      return 0;
   else
      return 1;
}
int pop(struct node** n)
{
	int res=(*n)->data;
    *n=(*n)->next;
    return res;
}
int peek(struct node** n)
{
	return (*n)->data;
}
int main(void) {
	char* str=(char*)malloc(sizeof(char*)*100);
    scanf("%s",str);
	int result=0;
	struct node* stack=(struct node *)malloc(sizeof(struct node));
	for(int i=0;str[i];i++)
	{
		if(str[i]=='C')
		{
			push(&stack,12);
		}
		else if(str[i]=='H')
		{
			push(&stack,1);
		}
		else if(str[i]=='O')
		{
			push(&stack,16);
		}
		else if(str[i]=='(')
		{
			push(&stack,-1);
		}
		else if(str[i]==')') 
		{
			while(peek(&stack)!=-1)
			{
				result=result+pop(&stack);
			}
			pop(&stack);
			push(&stack,result);
			result=0;
		}
		else if(str[i]>='0' && (str[i])<='9')
		{
            result=(pop(&stack))*((int)str[i]-48);
			push(&stack,result);
			result=0;
		}
	}
	while(isempty(&stack))
	{
		result=pop(&stack)+result;
	}
	printf("%d",result);
	return 0;
}
