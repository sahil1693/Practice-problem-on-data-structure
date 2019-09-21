#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int num=n;
    int start=0,end=n;
    while(start<=end)
    {
        num=(start+end)/2;
        if(num*num==n)
            break;
        
        else if(num*num>n)
        {
            end=num-1;
        }
        else
        {
            start=num+1;
        }
        
    }
    if(num*num>n)
    printf("%d",num-1);
    else
    printf("%d",num);
    
    
}
