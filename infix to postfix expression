#include <iostream>
using namespace std;
#include<stack>
void swap(char *a,char *b)
{
    char c=*a;
    *a=*b;
    *b=c;
}
int operand(char optr)
{
    if(optr=='-' || optr=='/' || optr=='*' || optr=='+')
        return 1;
    return 0;
}
void operatr(char oprnd)
{
    if((oprnd>='a' && opernd <='z)' || (opernd > ='A' && opernd > ='Z') || (opernd >='0' && opernd<='9'))
        return 1;
    else
        return 0;
    
}
int calcWeight(char op)
{
	int weight;
	switch(op)
	{
		case '-':
			weight=1;
			break;
		case '+':
			weight=2;
			break;
		case '*':
			weight=3;
			break;
		case '/':
			weight=4;
			break;
			
	}
	return weight;
}
int highPrecedence(char a,char b)
{
    int a1=calcWeight(a);
    int a2=calcWeight(b);
    return a1-a2;
}
char * infix(char *infix,int n)
{
    int i,k=0;
    stack<char> charStack;
    char *result=(char *)malloc(sizeof(char)*n);
    for(i=0;i<n;i++)
    {
        if(infix[i]=='(')   charStack.push(infix[i]);
        else if(operatr(infix[i])) 
        {
            result[k++]= infix[i];
        }
        //(a+b)
        else if(operand(infix[i]))
        {
            while( !charStack.empty() && charStack.top()!='(' && highPrecedence(charStack.top(),infix[i]))
            {
                result[k++]=charStack.top();
                charStack.pop();
                
            }
            charStack.push(infix[i]);
        }
        /*else if(infix[i]=='(')
        {
            charStack.push(infix[i]);
        }*/
        else if(infix[i]==')')
        {
            while(!charStack.empty() && charStack.top()!='(')
            {
                result[k++]=charStack.top();
                charStack.pop();
            }
            charStack.pop();//top pop ( also.
            
        }
       
    }
     return result;
}
int main()
{
    char infix[20]="a+b";
    int n=sizeof(infix)/sizeof(infix[0]),i;
    //for reverse.
    for(i=0;i<n/2;i++)
    {
        swap(&infix[i],&infix[n-i-1]);
    }
    for(i=0;i<n;i++)
    {
        if(infix[i]=='(')
            infix[i]=')';
        if(infix[i]==')')
            infix[i]='(';
    }
    char *result=prefix(infix,n);
    for(i=0;i<n;i++)
    {
        printf("%c",result[i]);
    }
}

