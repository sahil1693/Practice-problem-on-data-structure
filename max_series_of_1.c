 //program to print max series of one
 
 /*
 input :
 10
 0 1 1 1 0 0 1 1 1 0
 2
 output
 maximum =5
 index are given below
 
 0 1 2 3 4 
 */
 #include<stdio.h>
 #include<stdlib.h>
 int main()
 {
    int n;
    scanf("%d",&n);
    int *a=(int *)malloc(sizeof(int)*n);
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    int n1;
    scanf("%d",&n1);
    int r=0,l=0,posr=0,max=0,count_zero=0;
    while(r<n)
    {
        if(a[r]==1)
            r++;
        else if(a[r]==0&&count_zero<n1)
        {
            r++;
            count_zero++;
        }
        else
        {
            if(max<r-l)
            {
                max=r-l;
                posr=r;
            }
            while(a[l]!=0)
                l++;
            l++;
            count_zero--;
        }   
    }
    if(max<r-l)
    {
    max=r-l;
    posr=r;
    }
    printf("Maximum is %d \n", max);
    printf("index are given below\n\n");
    for(int i=posr-max;i<posr;i++)
        printf("%d",i);
    }
