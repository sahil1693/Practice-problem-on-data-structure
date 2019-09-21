#include <stdio.h>
#include<stdlib.h>
int main()
{
int a[]={-1}; 
int b[]={-2};
int c[]={-3};
int i=0,j=0,k=0,diff=0;
int min=a[i] < b[j] ? ( a[i]< c[k]? a[i] : c[k]) : (b[j] < c[k] ? b[j] : c[k]) ;
int max=a[i] > b[j] ? ( a[i]> c[k]? a[i] : c[k]) : (b[j] > c[k] ? b[j] : c[k]) ;
  int a1=abs(max-min);
  while(i<1&&j<1&&k<1)
{
 int min=a[i] < b[j] ? ( a[i]< c[k]? a[i] : c[k]) : (b[j] < c[k] ? b[j] : c[k]) ;
 int max=a[i] > b[j] ? ( a[i]> c[k]? a[i] : c[k]) : (b[j] > c[k] ? b[j] : c[k]) ;
   diff=abs(max-min);
    if(a1>diff)
    {
       a1=diff;
    }
    if(a[i]==min)
  {
    i++;
  }
    if(b[j]==min)
    {
      j++;
    }
    if(c[k]==min)
    {
      k++;
    }
}
 printf("%d",a1);
  return 0;
}
