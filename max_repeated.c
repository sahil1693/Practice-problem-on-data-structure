//prgram to get maximum repeated element
/*
input
n=3
2 1 3
5 3 9
output:
3
*/

#include<stdio.h>
int main()
{
        int l[3]={2,1,3};
        int h[3]={5,3,9};
        int n=3;
        int max=h[0];
        for(int i=0;i<n;i++)
            if(h[i]>max)
                max=h[i];
        int a[10]={0};
        for(int i=0;i<n;i++)
        {
            a[l[i]]=a[l[i]]+1;
            a[h[i]+1]=a[h[i]+1]-1;
        }
        
        int max1=a[0];
        for(int i=0;i<max;i++)
        {
            if(a[i]>max1)
            {
                max1=a[i];
                    num=i;
            }
            a[i+1]=a[i+1]+a[i];
        }
           printf("%d\n",num);
  return 0;
}   
