//program to get reverse of a subarray in a array

/*        
q-1       1 2 3 4 5 6 7 8 9
          3 2 1 6 5 4 9 8 7 (if k=3)
 */
#include<stdio.h>
 int main()
 {         
          int a[11]={1,2,3,4,5,6,7,8,9,10,11};
          int k=3;
          int n=11;
          void swap(int *p,int *q)
          {
            int temp;
            temp=*p;
            *p=*q;
            *q=temp;
          }          
          for(int i=0;i<n;i=i+k)
          {
            if(i+k<n){
            for(int j=0;j<k/2;j++)
            {
                swap((a+j+i),(a+k+i-j-1));
            }
            }
            else
            {
               for(int j=0;j<(n%k)/2;j++)
               {
                   swap((a+j+i),(a+i-1-j+(n%k))); 
               }
            }
          }
          
          for(int i=0;i<n;i++)
            printf("%d\n",a[i]);
  return 0;
}
