/*program to find nearest samller in an array using stack
input
5  //size of array
2 4 5 2 3   //element of array
output
-1 2 4 -1 2

*/

#include<iostream>
#include<cstdio>
#include<stack>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    stack<int> s;
    for(int i=0;i<n;i++)
    {
        if(s.empty())
         printf("-1");
        else
        {
         while(!(s.empty())&&s.top()>=a[i])
            {
                s.pop();
            }
            if(s.empty())
                printf("-1");
            else
            printf("%d",s.top());
        }
        if(s.empty())
            s.push(a[i]);
        else if(a[i]<s.top())
        {
            while(!(s.empty())&&s.top()>=a[i])
            {
                s.pop();
            }
            s.push(a[i]);
        }
        else
            s.push(a[i]);
    }
}
