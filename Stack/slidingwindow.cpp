/* program to find maximum in a window of size k
    input-
    7  size of the array
    1 3 1 -3 4 5 6  //element of array
    3  //size of window
    output-
    3 3 4 5 6*/
#include<iostream>
#include<stack>
#include<cstdio>
#include<deque>
using namespace std;
int main()
{
    deque<int> q;
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int k;
    scanf("%d",&k);
    int k1=0,k2=0,max=0;
    for(int i=0;i<n;i++)
    {
        if(q.empty()){
       q.push_back(i);
       k1++;
       }
       else if(a[i]<=a[q.back()]&&k1<k){
       q.push_back(i);
       k1++;
       }
       else if(a[i]>a[q.back()]&&k1<k)
        {
            while(!(q.empty())&&a[i]>a[q.back()]){
                q.pop_back();
                }
              q.push_back(i);
              k1++;
        }
       if(k==k1)
        {
            k1--;
            
            if(i-q.front()>=k)
                q.pop_front();
            printf("%d ",a[q.front()]); 
        }
    }
    

}
