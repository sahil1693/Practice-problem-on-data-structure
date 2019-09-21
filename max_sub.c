//program to get maximum sum of a sub array and print the subarray in reverse order
/*
input:
5
-3 1 -2 4 -2 3 1 -1 4

output
4 -1 1 3 -2 4
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
    int pos=0;
    for(int i=1;i<n;i++){
        if(a[i]+sum>a[i]){
            sum+=a[i];
            if(max<sum)
            {
                max=sum;
                pos=i;
            }
            }
            
        else {
            sum=a[i];
            max=max>a[i]?max:a[i];
            }
    }
    for(int i=pos;i>=0;i--)
    {
    if(max==0)
    break;
    printf("%d ",a[i]);
    max=max-a[i];
    }
    return 0;
}
