/*
Problem:
Write a function that takes an unsigned integer and returns the number of 1 bits it has.

Example:

The 32-bit integer 11 has binary representation

00000000000000000000000000001011
so the function should return 3.*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int count=0;
    while(n)
    {
        if(n&1)
            count++;
        n=n>>1;
    }
    printf("%d",count);
}
