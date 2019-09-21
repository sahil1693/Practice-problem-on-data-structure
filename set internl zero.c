#include<stdlib.h>
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int **A=(int **)malloc(sizeof(int *)*n);
    for(int i=0;i<n;i++)
        A[i]=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            scanf("%d",&A[i][j]); 
    int m=n;
    int r1=0,c1=0;
    for(int i=0;i<n;i++){
        if(A[0][i]==0){
            r1=1;
            break;
        }
    }
    for(int i=0;i<m;i++){
        if(A[i][0]==0){
            c1=1;
            break;
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(A[i][j]==0){
                A[i][0]=0;
                A[0][j]=0;
            }
        }
    }
    for(int i=1;i<m;i++){
        for(int j=1;j<n;j++){
            if(A[i][0]==0||A[0][j]==0)
             A[i][j]=0;
        }
    }
    if(r1==1){
        for(int i=0;i<n;i++)
         A[0][i]=0;
    }    
    if(c1==1){
        for(int i=0;i<m;i++)
         A[i][0]=0;
    }    
    
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
            printf("%d ",A[i][j]);
        printf("\n");    
    }    
}
