#include<stdio.h>
int partition(int a[],int s,int e){

    int pivot=a[e];
    int i=s-1,temp;
    for(int j=s;j<=e-1;j++){
        if(a[j]<=pivot){
        i++;
        temp=a[i];
        a[i]=a[j];
        a[j]=temp;
        }
    }
    temp=a[i+1];
    a[i+1]=a[e];
    a[e]=temp;
    
    return i+1;
}
void quicksort(int a[],int s,int e){

    if(s<e){
        int q=partition(a,s,e);
        quicksort(a,s,q-1);
        quicksort(a,q+1,e);
    }

}
int main(){
    int n;
    scanf("%d",&n);
    int a[n];
    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);
    quicksort(a,0,n-1);
    for(int i=0;i<n;i++)
        printf("%d ",a[i]);
return 0;
}

/*
Complexity
time : O(nlogn) best and average
time : O(n^2) worst case
space : O(log(n))

*/
