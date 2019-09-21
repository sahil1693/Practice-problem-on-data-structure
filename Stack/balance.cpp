/*To check wheater braces are balance or not

*/

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    stack<char> s;
    string str;
    cin>>str;
    int flag=0;
    for(int i=0;str[i];i++)
    {
        if(str[i]=='{'||str[i]=='(')
            s.push(str[i]);
        else if(s.empty())
        {
            flag=1;
            break;
        }
        else if(str[i]=='}'&&s.top()=='{')
                s.pop();
        else if(str[i]==')'&&s.top()=='(')
            s.pop();
        else
        {
            flag=1;
            break;
        }
    }
    if(flag==1&&(!s.empty()))
        cout<<"not balance";
    else
        cout<<"balance";
    return 0;
}
