#include<iostream>
#include<stack>
#include<cstdio>
using namespace std;
int main()
{
    char ch[101];
    cin>>ch;
    stack<int> s;
    int molecule=0,sub=0,flag=0;
    int a[3]={1,12,16};
    int m;
    for(int i=0;ch[i];i++)
    {
    sub=0;
        if(ch[i]==')'){
            while(!s.empty()&&s.top()!='(')
            {
                if(s.top()==145||s.top()==146||s.top()==147)
                sub+=a[s.top()-145];
                else
                sub+=s.top();
                s.pop();
            }
            s.pop();
            flag--;
            if(ch[i+1]!='\0'&&ch[i+1]>='0'&&ch[i+1]<='9'){
            sub=sub*(((int)ch[i+1])-48);
            i++;
            }
            if(flag==0)
                molecule+=sub;
            else
            s.push(sub);
            }
        else{
          
            if(ch[i]=='H')
                s.push(145);
            else if(ch[i]=='C')
                s.push(146);
            else if(ch[i]=='O')
                s.push(147);
            else if(ch[i]>='0'&&ch[i]<='9')
            {
                m=a[s.top()-145];
                m=m*(((int)ch[i])-48);
                s.pop();
                s.push(m);
             }
            else{
                s.push(ch[i]);
                flag++;
            }
      }
    }
    if(sub!=0)
     {
        molecule=sub;
        sub=0;
     }
    while(!s.empty())
    {
        if(s.top()==145||s.top()==146||s.top()==147)
                sub+=a[s.top()-145];
                else
                sub+=s.top();
                s.pop();
    }
    cout<<molecule+sub;
}
