#include<stdio.h>
int main(){
    int n;
    scanf("%d",&n);

    int a[n];

    for(int i=0;i<n;i++){
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n;i++){
        int temp;
        int small=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[small]>a[j])
                small=j;
        }
        temp=a[small];
        a[small]=a[i];
        a[i]=temp;
    }
    for(int i=0;i<n;i++){
        printf("%d ",a[i]);
    }   
    return 0;
}

/*
Complexity
Time complexity : O(n^2)
Space complexity : O(n^2)
*/
