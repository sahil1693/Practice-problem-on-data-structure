/*Problem:
Reverse bits of an 32 bit unsigned integer
Example 1:
x = 0,
          00000000000000000000000000000000  
=>        00000000000000000000000000000000
return 0
Example 2:
x = 3,
          00000000000000000000000000000011 
=>        11000000000000000000000000000000
return 3221225472
*/
#include<stdio.h>
#include<stdlib.h>
int main()
{
    unsigned int A;
    scanf("%u",&A);
    unsigned int n=0;
    int p=31;
    while(A)
    {
        if(A&1)
        {
            n=n|(1<<p);
        }
        A=A>>1;
        p--;
    }
    printf("%d",n);
}
