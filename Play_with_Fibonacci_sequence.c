#include<stdio.h>
int main()
{
    int a=0,b=1,n,i,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        a=b;
        b=c;
        printf("%d ",c);
        c=a+b;
    }
    
}