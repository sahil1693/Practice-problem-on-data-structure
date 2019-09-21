/*
input:
3
1 1 0 
1 0 1
1 1 1

1 0 0
0 0 1
1 1 1
output:
0 0 0
0 0 0
1 0 0

*/
#include<stdio.h>
#include<stdlib.h>
int size;
int main()
{  
    int n;
    scanf("%d",&n);
    size=n;
    int **a=(int **)malloc(sizeof(int *)*n);
    for(int i=0;i<n;i++)
        *(a+i)=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",(*(a+i)+j));
    
    
}
