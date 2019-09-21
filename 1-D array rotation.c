//program to rotate the 1-D array in clockwise directoin

/*
input:
5
1 2 3 4 5
7

output:
3 4 5 1 2 

*/

#include<stdio.h>
#include<stdlib.h>
int size;
int temp;
void print(int a[])
{
    for(int i=0;i<size;i++)
        printf("%d ",a[i]);
}
void shift(int arr[])
{
    temp=arr[0];
    for(int i=0;i<size-1;i++)
        arr[i]=arr[i+1];
    arr[size-1]=temp;
}
int main()
{
    int n;
    scanf("%d",&n);
    size=n;
    int *a=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",(a+i));
    int r;
    scanf("%d",&r);
    r=r%n;
    for(int i=0;i<r;i++)
        shift(a);
    print(a);    
}

