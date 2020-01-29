#include<stdio.h>
int main(){
int n;
scanf("%d",&n);
int a[n];
for(int i=0;i<n;i++){

scanf("%d",&a[i]);
}
int flag=0;
for(int i=0;i<n-1;i++)
{
    flag=0;
    for(int j=0;j<n-i-1;j++)
    {
        if(a[j]>a[j+1])
        {
            int temp=a[j];
            a[j]=a[j+1];
            a[j+1]=temp;
            flag=1;
        }
    }
    if(flag==0)
        break;
}
for(int i=0;i<n;i++){

printf("%d ",a[i]);
}

}

//Complexity
/*
Time complexity : O(n^2)
space complexity : O(1)
*/
