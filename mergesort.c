#include<stdio.h>
void merge(int a[],int s,int m,int e){

    int b[e],j=s,k=m+1,i=0;
    for(;j<=m&&k<=e;){
        if(a[j]<a[k]){
            b[i++]=a[j++];
        }
        else
        {
            b[i++]=a[k++];
        }
    }
    while(j<=m){
    b[i++]=a[j++];
    }
    while(k<=e){
    b[i++]=a[k++];
    }
    for(j=e;j>=s;j--){
    a[j]=b[--i];
    }
}
void mergesort(int a[],int s,int e){

    if(s<e){
        int q=(s+e)/2;
        mergesort(a,s,q);
        mergesort(a,q+1,e);
        merge(a,s,q,e);    
    }
}
int main(){
    int n;
    scanf("%d",&n);
    
    int a[n];
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    mergesort(a,0,n-1);
    for(int i=0;i<n;i++){
    printf("%d ",a[i]);
    }
}



/*
complexity
Time complexity : O(nlogn)
Space complexity : O(n)

*/
