//a program of 2-D array rotation by 90 degree
/*
input:
3
1 2 3
4 5 6
7 8 9

output:
7 4 1
8 5 2
9 6 3
*/

#include<stdio.h>
#include<stdlib.h>
int size;
void transpose(int **a)
{
    int temp;
    for(int i=0;i<size;i++)
        for(int j=i;j<size;j++)
        {
            temp=*(*(a+i)+j);
            *(*(a+i)+j)=*(*(a+j)+i);
            *(*(a+j)+i)=temp;
        }
}
void swap(int **a)
{
    int temp;
    for(int i=0;i<size;i++)
        for(int j=0;j<size/2;j++)
        {
            temp=*(*(a+i)+j);
            *(*(a+i)+j)=*(*(a+i)+size-1-j);
            *(*(a+i)+size-1-j)=temp;
        }
}
void print(int **a)
{
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++)
            printf("%d ",*(*(a+i)+j));
            printf("\n");
   }
}
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
    transpose(a);
    swap(a);
    print(a);            
}

