#include <stdio.h>
#include<stdlib.h>
int main(void) {
    typedef unsigned long long int l1;
	l1 n,o,m;
	scanf("%llu %llu %llu",&n,&o,&m);
    l1 **a=(l1 **)malloc(sizeof(l1*)*n);
	for(l1 i=0;i<n;i++)
	    a[i]=(l1 *)malloc(sizeof(l1)*2);
	for(int i=0;i<n;i++)
	{
	    scanf("%llu %llu",&a[i][0],&a[i][1]);
	}
	
	l1 sum=0,sum1=0;
	l1 l=0,mid,h=o;
	while(l<h)
	{
	    mid=(l+h)/2;
	     sum=0;
	     for(int i=0;i<n;i++)
	     {
	         sum1=a[i][0]+(a[i][1]*mid);
	         if(sum1>=m)
	         {
	             sum+=sum1;
	             if(sum>=o)
	             break;
	         }
	     }
	     if(sum>=o)
	     h=mid;
	     else
	     l=mid+1;
	}
	printf("%llu",l);
	return 0;
}


