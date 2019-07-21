//program to find maximum index difference
/*
input:
4
2 4 3 1
output:
2

condition
max(j-i)
a[j]>a[i]
*/

#include<stdio.h>
#include<stdlib.h>
struct arr {
    int index;
    int number;
};
int comparator(const void *p,const void *q) {
    int l=((struct arr *)p)->number;
    int r=((struct arr *)q)->number;
    return l-r;
}
int main() {
    int n;
    scanf("%d",&n);
    struct arr *a=(struct arr *)malloc(sizeof(struct arr)*n);
    for(int i=0;i<n;i++){
        a[i].index=i;
        scanf("%d",&a[i].number);}
    qsort(a,n,sizeof(a[0]),comparator);
    for(int i=0;i<n;i++) {
        printf("%d %d\n",a[i].index,a[i].number);
    }
    int min=a[0].index;
    int max=0;
    for(int i=0;i<n;i++){
        if(a[i].index-min>=max){
            max=a[i].index-min;
        }
        min=a[i].index<min?a[i].index:min;
    }
   printf("%d",max);
}
