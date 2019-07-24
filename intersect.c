#include<stdio.h>
#include<stdlib.h>
void scan(int *a,int n)
{
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
}
void print(int *a,int n)
{
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
}
int* intersect(int *a,int *b,int n,int m,int *p)
{
    int pos=0,j=0;
    static int c[10];
    if(n<=m){
        for(int i=0;i<m&&pos<n;i++)
        {
            if(a[pos]==b[i])
            {
                c[j]=b[i];
                j++;
                pos++;
            }
            else if(a[pos]<b[i])
            {
                pos++;
            }
            else {}
        }
    }
    else
    {
        for(int i=0;i<n&&pos<m;i++)
        {
            if(a[i]==b[pos])
            {
               c[j]=b[pos];
               j++;
               pos++;
            }
            else if(b[pos]>a[i])
            {
              continue;
            }
            else {
                pos++;
            }
        }
    }
    *p=j;
    return c;
}
int main()
{
    int n;
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    scan(a,n);
    int m,n1;
    scanf("%d",&m);
    int *b=(int *)malloc(sizeof(int)*m);
    scan(b,m);
    int *c=intersect(a,b,n,m,&n1);
    print(c,n1);
    return 0;
}
