/*Problem:
We define f(X, Y) as number of different corresponding bits in binary representation of X and Y. For example, f(2, 7) = 2, since binary representation of 2 and 7 are 010 and 111, respectively. The first and the third bit differ, so f(2, 7) = 2.

You are given an array of N positive integers, A1, A2 ,…, AN. Find sum of f(Ai, Aj) for all pairs (i, j) such that 1 ≤ i, j ≤ N. Return the answer modulo 109+7.
For example,
A=[1, 3, 5]
We return
f(1, 1) + f(1, 3) + f(1, 5) + 
f(3, 1) + f(3, 3) + f(3, 5) +
f(5, 1) + f(5, 3) + f(5, 5) =
0 + 1 + 1 +
1 + 0 + 2 +
1 + 2 + 0 = 8
*/

#include<stdio.h>
#include<stdlib.h>
#define mod 1000000007;
int cntBits(int* A, int n1) {
    int i,j,n;
    long long int ans=0;
    int count=0;
    for(i=0;i<31;i++)
    {
        count = 0;
        for(j = 0; j < n1; j++){
            if(A[j] & (1 << i)){
                count++;
            }
        }
        ans = ans + (2*count*(n1-count));
        ans = ans%mod;
    }
    return (int)ans;
}
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",cntBits(a,n));
    return 0;
}

