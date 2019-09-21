/** Given n non-negative integers representing an elevation map where the width of each bar is 1, compute how much water it is able to trap after raining.


input
 12   //size of array
 0 1 0 2 1 0 1 3 2 1 2 1 //array element

output- 
6 //total rainwater trap in bar of width 1

//reference interviewbit rain water trapped
*/

#include<stdio.h>
#include<stdlib.h>
int trap(const int* A, int n1) {
    int max=0,pos,i;
    for(i=0;i<n1;i++)
    {
        if(max<=A[i])
        {max=A[i];
        pos=i;
        }
    }
    max=A[0];
    int total=0;
    for(i=0;i<pos;i++)
    {
        if(max-A[i]>0)
        total+=max-A[i];
        max=max>A[i]?max:A[i];
    }
    max=A[n1-1];
    for(i=n1-1;i>pos;i--)
    {
        if(max-A[i]>0)
            total+=max-A[i];
        max=max>A[i]?max:A[i];
    }
    return total;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
     printf("%d",trap(a,n));
}
