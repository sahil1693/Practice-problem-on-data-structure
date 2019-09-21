//Program to display unique element
/*
input:
12
1 1 1 2 2 2 2 3 3 4 5 6

output:
123456
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int pos=0;
    for(int i=1;i<n;i++)
    {
        if(a[pos]!=a[i])
        {
            pos++;
            a[pos]=a[i];
        }
    }
    for(int i=0;i<=pos;i++)
        printf("%d",a[i]);
}
