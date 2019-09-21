#include<stdio.h>
int a[20];
int size=0;
void swap(int i,int j)
{
    int temp=a[i];
    a[i]=a[j];
    a[j]=temp;
}
void sink(int i)
{
    if(i >= size)
        return ;
    int max=i;
    int l=i*2;
    int r=i*2+1;
    if(l<size&&a[l]>a[max])
        max=l;
    if(r<size&&a[r]>a[max]) 
        max=r;
    if(i!=max){
        swap(i,max);
        sink(max);
    }
    
}
void swim(int i)
{
    if(i==0)
       return ;
    int p=i/2;
    if(a[p]<a[i]){
        swap(p,i);
        swim(p);
   }
}
void insert(int data)
{
    a[size++]=data;
    swim(size-1);
}
int get_max(){
    return a[0];

}
int del_max(){
int k=get_max();
swap(0,size-1);
size--;
sink(0);
return k;
}

int main()
{
    insert(9);
    insert(3);
    insert(8);
    insert(1);
    insert(2);
    insert(7);
    insert(5);
    insert(-1);
    insert(0);
    printf("%d",get_max());
    printf("%d",del_max());
    printf("%d",get_max());
    return 0;
}
