/*program to convert infix expression to postfix using stack
    input-
    3*4*5-5-6+(4+5)/2   //string from user
    output-
    345**5645+2/+--
    
*/

#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
typedef struct stack
{
    char data;
    struct stack *next;
}Stack;
void push(Stack **s,char data)
{
    Stack *new1=(Stack *)malloc(sizeof(Stack));
    new1->data=data;
    new1->next=*s;
    *s=new1;    
}
void pop(Stack **s)
{
    *s=(*s)->next;
}
char top(Stack **s)
{
   char data=(*s)->data;
   return data; 
}
char poll(Stack **s)
{
    char data=(*s)->data;
    (*s)=(*s)->next;
    return data;
}
int empty(Stack *s)
{
    if(s==NULL)
        return 1;
     return 0;
}
int main()
{
    char ch[100];
    int j=0;
    scanf("%s",ch);
    Stack *s=(Stack *)malloc(sizeof(Stack));
    char ch1[100];
    for(int i=0;ch[i];i++)
    {
        if(isdigit(ch[i])||isalpha(ch[i]))
           { ch1[j]=ch[i];
            j++;
            }
        else
        {
           if(ch[i]=='(')
            push(&s,ch[i]);
           else if(ch[i]=='^')
                push(&s,ch[i]);
           else if(ch[i]=='*'||ch[i]=='/')
            {
                  if(empty(s))
                    push(&s,ch[i]);
                  else if(top(&s)!='^')
                  {
                    push(&s,ch[i]);
                  }
                  else
                  {
                    while(s&&top(&s)=='^'){
                    ch1[j]=poll(&s);
                    j++;
                    }     
                    push(&s,ch[i]);               
                  }
            }
            else if(ch[i]=='-'||ch[i]=='+')
            {
                if(empty(s))
                    push(&s,ch[i]);
                else if(top(&s)=='^'||top(&s)=='/'||top(&s)=='*')
                   {
                        while(s&&(top(&s)=='^'||top(&s)=='/'||top(&s)=='*'))
                        {
                            ch1[j]=poll(&s);
                            j++;
                        }
                        push(&s,ch[i]);
                   }   
                   
                else
                {
                    push(&s,ch[i]);
                }
            }
            else if(ch[i]==')')
            {
                while(s&&top(&s)!='(')
                {
                    ch1[j]=poll(&s);
                    j++;
                }
                poll(&s);
            }
        }
    }
   while(s!=NULL)
    {
       ch1[j]=poll(&s);
       j++;
    }
    printf("%s",ch1);
}
