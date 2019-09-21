//Problem:
/*
Given an array of N integers, find the pair of integers in the array which have minimum XOR value. Report the minimum XOR value.
Examples :
Input
4
0 2 5 7
Output
2 (0 XOR 2)
Input
4
0 4 7 9
Output
3 (4 XOR 7)
Constraints:
2 <= N <= 100 000
0 <= A[i] <= 1 000 000 000
*/

#include<stdio.h>
#include<stdlib.h>
int compare(const void *p,const void *q)
 {
     return *(int *)p-*(int *)q;
 }
int findMinXor(int* A, int n) {
    qsort(A,n,sizeof(A[0]),compare);
    int i,min=88888,min1=A[0];
    for(i=0;i<n-2;i++){
        
        if(A[i+1]-A[i]<A[i+2]-A[i+1])
        {
            if((A[i+1]^A[i])<min)
                min=A[i+1]^A[i];
        }
        else
        {
            if((A[i+2]^A[i+1])<min)
            min=A[i+2]^A[i+1];
        }
    }
    return min;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",findMinXor(a,n));
}
