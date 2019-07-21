// program to merge intervals
/*
input:
5
1 2
2 9
3 5
6 7
7 9

output
1 9
*/

#include<stdio.h>
#include<stdlib.h>
struct interval
{
    int s;
    int e;
};
int comparator(const void *p,const void *q)
{
    int l=((struct interval *)p)->s;
    int r=((struct interval *)q)->s;
    return l-r;
}
void merge(struct interval a[],int *size)
{
    struct interval s1[*size];
    int count=0;
    s1[count].s=a[0].s;
    s1[count].e=a[0].e;
    int max;
    for(int i=0;i<*size;i++)
    {
        if(s1[count].e>=a[i].s)
        {
            max=s1[count].e > a[i].e ? s1[count].e : a[i].e;
            s1[count].e=max;
        }
        else
        {
            
            count++;
            s1[count].s=a[i+1].s;
            s1[count].e=a[i+1].e;
            
        }
    }
    count++;
    for(int i=0;i<count;i++)
        printf("%d %d\n",s1[i].s,s1[i].e);
}
int main()
{
    int n;
    scanf("%d",&n);
    struct interval s1[n];
    for(int i=0;i<n;i++)
        scanf("%d %d",&s1[i].s,&s1[i].e);
    qsort((void *)s1,n,sizeof(s1[0]),comparator);
    merge(s1,&n);
    
}
