/*
Evaluate the value of an arithmetic expression in Reverse Polish Notation.

Valid operators are +, -, *, /. Each operand may be an integer or another expression.

input - 
5   size of string array
2 1 + 3 *  strign array
output
9
*/

#include<iostream>
#include<cstdio>
#include<cstdlib>
#include<string>
#include<stack>
using namespace std;
int expression(string a[],int n)
{
 int i;
    stack<int> s;
    int total=0;
    int b,c;
    for(i=0;i<n;i++)
    {
        if(!(a[i].compare("/")))
        {
            c=s.top();
            s.pop();
            b=s.top();
            s.pop();
            b=b/c;
            s.push(b);
        }
        else if(!(a[i].compare("*")))
        {
            c=s.top();
            s.pop();
            b=s.top();
            s.pop();
            b=b*c; 
            s.push(b);
        }
        else if(!(a[i].compare("-")))
        {
             c=s.top();
            s.pop();
            b=s.top();
            s.pop();
            b=b-c;  
            s.push(b);
        }
        else if(!(a[i].compare("+")))
        {
            c=s.top();
            s.pop();
            b=s.top();
            s.pop();
            b=b+c;
            s.push(b);
        }
        else {
            int d=stoi(a[i]);
            s.push(d);
        }
    }
  return s.top();
}
int main()
{
    string str[]={"2","3","+","3","*"};
    printf("%d",expression(str,5));
    return 0;
}
