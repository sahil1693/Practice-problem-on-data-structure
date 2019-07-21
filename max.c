//program to get maximum sum of a sub array
/*
input:
5
-3 1 -2 4 -2 3 1 -1 4

output
9
*/

#include<stdio.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",(a+i));
    int sum=a[0],max;
    max=a[0];
    for(int i=0;i<n;i++){
        if(a[i]+sum>a[i]){
            sum+=a[i];
            max=max>sum?max:sum;}
        else
            sum=a[i];
    }
    printf("%d",max);
    return 0;
}
