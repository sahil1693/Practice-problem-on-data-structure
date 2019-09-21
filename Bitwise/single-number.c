/*Problem:
Given an array of integers, every element appears twice except for one. Find that single one.
Note: Your algorithm should have a linear runtime complexity. Could you implement it without using extra memory?
Example :
Input : [1 2 2 3 1]
Output : 3
*/

#include<stdio.h>
#include<stdlib.h>
int singleNumber(const int* A, int n1) {
    int i=0;
    int number=0;
    for(i=0;i<n1;i++)
        number=number^A[i];
    return number;
}

int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("%d",singleNumber(a,n));
    return 0;
}
