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
void swap(int **a)
{
    int temp;
    for(int i=0;i<size/2;i++)
        for(int j=i;j<size-1;j++)
        {
            temp=a[i][j];
            a[i][j]=a[size-1-j][i];
            a[size-1-j][i]=a[size-1-i][size-1-j];
            a[size-1-i][size-1-j]=a[j][size-1-i];
            a[j][size-1-i]=temp;
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
    swap(a);
    print(a);            
}





// what i have learnt
/*

*/
