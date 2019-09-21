#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
   /* char ch[]="4hFqk23IewOBKdT3Wo4ACn6fd1o7nqrZ5drUxUmASTA6CftD6Gvl7SurJTRl2WFqitOlqcGemKExmGSq5UPpZwDeEW595DW2ksvktn9OvMVn9CAThVulLPJbFB4pW5KVv7oTPxzronfUdehSObbSbbbdojGNARXjKUejNbqkRSStJNoo0iooembvz4OHchx3WPCND7y6Q28hIOjZmBOy1Eo7JBoke8Ce16jo4wdk03iKk5bE74VvZgk2Q6zJO0KCfPKoHFhF0066txRZsYFFb1ELhEsxoUB9fPww08C442r9VsvqUMpr0SMxF3TjbaHfTpRkzReH4ZqObeEIrUIdl73dWY4L4Dn6geuNRFqvYZluQQMRL5kbfD3InbOXYa3LmCvhmriXY1Jyu6IzXmU6ChdXJsw4ruJqV3msSLdn7ZJNWawJOpWZzafo9NTQhQZVB9MBwc0tAmnNXbtFbh6r9x2W4ODdlTlH4yz30I1tKcnQs60PNK6wa6pWIeycnSE74rqTXhXF3c2Tbx3H2nQvHCvA";
    int n=18;
    int s=1,f=(n*2-5),flag=1;
    for(int i=0;i<n;i++)
    {
        flag=1;
        for(int j=i;j<strlen(ch);j++)
        {
            if(i==0)
            {
                printf("%c ",ch[j]);
                j=j+(n*2-3);
            }
            else
            {
                printf("%c ",ch[j]);
                if(flag==1){
                j=j+f;
                flag=0;
                }
                else
                {
                    j=j+s;
                    flag=1;
                }
            }
        }
        printf("\n");
        if(i!=0){
        s=s+2;
        f=f-2;
        if(f<0)
            f=(n*2-3);}
       // printf("\n%d %d %d",i,s,f);
    }*/
    char ch[]="4hFqk23IewOBKdT3Wo4ACn6fd1o7nqrZ5drUxUmASTA6CftD6Gvl7SurJTRl2WFqitOlqcGemKExmGSq5UPpZwDeEW595DW2ksvktn9OvMVn9CAThVulLPJbFB4pW5KVv7oTPxzronfUdehSObbSbbbdojGNARXjKUejNbqkRSStJNoo0iooembvz4OHchx3WPCND7y6Q28hIOjZmBOy1Eo7JBoke8Ce16jo4wdk03iKk5bE74VvZgk2Q6zJO0KCfPKoHFhF0066txRZsYFFb1ELhEsxoUB9fPww08C442r9VsvqUMpr0SMxF3TjbaHfTpRkzReH4ZqObeEIrUIdl73dWY4L4Dn6geuNRFqvYZluQQMRL5kbfD3InbOXYa3LmCvhmriXY1Jyu6IzXmU6ChdXJsw4ruJqV3msSLdn7ZJNWawJOpWZzafo9NTQhQZVB9MBwc0tAmnNXbtFbh6r9x2W4ODdlTlH4yz30I1tKcnQs60PNK6wa6pWIeycnSE74rqTXhXF3c2Tbx3H2nQvHCvA";
    int n=18;
    int n1=strlen(ch);
    char *ch1=(char *)malloc(sizeof(char)*n1);
    int s=1,f=(n*2-5),flag=1,k=0;
    int i=0,j=0;
    if(n==1)
        return ch;
    else if(n==2)
    {
        for(i=0;i<n;i++)
        {
            for(j=i;j<strlen(ch);j+=2){
                ch1[k]=ch[j];
                k++;
            }
        }
        printf("%s",ch1);
    }
   for(i=0;i<n;i++)
    {
        flag=1;
        for(j=i;j<n1;j++)
        {
            if(i==0)
            {
                ch1[k]=ch[j];
                j=j+(n*2-3);
                k++;
            }
            else
            {
                ch1[k]=ch[j];
                k++;
                if(flag==1){
                j=j+f;
                flag=0;
                }
                else
                {
                    j=j+s;
                    flag=1;
                }
            }
        }
        if(i!=0){
        s=s+2;
        f=f-2;
        if(f<0)
            f=(n*2-3);}
    }
    printf("%s",ch1);
}

/*
g          g
 e       r  e
  e    o     e
   k  f       k
    s           s
g        o          s
 e     f   r       k
  e  s       g   e
   k           e

*/
