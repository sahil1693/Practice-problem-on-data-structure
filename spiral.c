#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int **a=(int **)malloc(sizeof(int *)*n);
    for(int i=0;i<n;i++)
        a[i]=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&a[i][j]);
    int size=n;
    for(int i=0;i<n/2;i++)
    {
            for(int j=i;j<size;j++)
                printf("%d ",a[i][j]);
            for(int j=i+1;j<size;j++)
                printf("%d ",a[j][size-1]);
            for(int j=size-2;j>=i;j--)
                printf("%d ",a[size-1][j]);
            for(int j=size-2;j>=i+1;j--)
                printf("%d ",a[j][i]);
            size--;
    }
    if(n%2!=0)
        printf("%d",a[n/2][n/2]);
    
}
