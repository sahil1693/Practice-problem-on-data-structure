//program to display maximum 2 repeated element 
/*
input
12
1 1 1 2 2 2 2 3 3 4 5 6
output:
112233456
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
    for(int i=0;i<n-2;i++)
    {
        if(a[i]==a[i+1]&&a[i]==a[i+2])
        {  }
        else
        {
            a[pos]=a[i];
            pos++;
        }
    }
    a[pos]=a[n-2];
    pos++;
    a[pos]=a[n-1];
    pos++;
    for(int i=0;i<pos;i++)
        printf("%d",a[i]);
}
