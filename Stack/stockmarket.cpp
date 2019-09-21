/*program to solve stock market problem using stack
    input - 
    8   //size of array
    100 80 60 70 50 80 90 110   //element of array
    
    output - 
    1 1 1 2 1 5 6 8
**/

#include<iostream>
#include<stack>
using namespace std;
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        cin>>a[i];
    int b[n];
    stack<int> q;
    for(int i=0;i<n;i++)
    {
        if(q.empty()||a[q.top()]>a[i]){
            q.push(i);
            }
        else
        {
            while(!q.empty()&&a[q.top()]<=a[i]){
                int m=q.top();
                q.pop();
                b[m]=q.empty()?m+1:m-q.top();
                }
            q.push(i);
        }
    }
    while(!q.empty()){
      int m=q.top();
      q.pop();
      b[m]=q.empty()?m+1:m-q.top();
      }
    for(int i=0;i<n;i++)
        cout<<b[i]<<" ";
}
