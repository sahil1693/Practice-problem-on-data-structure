#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int **a=(int **)malloc(sizeof(int *)*n);
    for(int i=0;i<n;i++)
        a[i]=(int *)malloc(sizeof(int *)*n);
    int mid;
    if(n%2==0)
    mid=n/2-1;
    else
    mid=n/2;
    int n1=n;
    for(int i=0;i<n;i++)
    {
            if(i%2!=0)
            {
              a[i][n1-1]=1;
              n1--;
            }
            else
            {
               a[i][mid]=1;
               mid--;
            }
     }
     for(int i=0;i<n;i++){
        for(int j=0;j<n;j++)
            printf("%d",a[i][j]);
            printf("\n");
            }
}
