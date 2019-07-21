/*A hotel manager has to process N advance bookings of rooms for the next season. His hotel has K rooms. Bookings contain an arrival date and a departure date. He wants to find out whether there are enough rooms in the hotel to satisfy the demand. Write a program that solves this problem in time O(N log N) .

input:
5
1 2 3 4 5
3 4 5 6 7
output:
3
*/

#include<stdio.h>
#include<stdlib.h>
int comparator(const void *p,const void *q)
{
    return *(int *)p-*(int *)q;
}
int main()
{
    int n;
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    int *b=(int *)malloc(sizeof(int)*n);
    printf("Enter arrival time");
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Enter departure time");
    for(int i=0;i<n;i++)
        scanf("%d",&b[i]);
    qsort(a,n,sizeof(a[0]),comparator);
    qsort((void *)b,n,sizeof(b[0]),comparator);
    int k;
    int room=0,count=0;
    scanf("%d",&k);
    for(int i=0;i<n;i++)
    {
        if(a[i+1]<b[i])
            count++;
        if(count>k)
            room++;        
    }
    printf("%d",room);
}
