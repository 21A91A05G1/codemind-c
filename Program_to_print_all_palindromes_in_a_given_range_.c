#include<stdio.h>
int main()
{
    int m,n,i,d,temp,rev=0;
    scanf("%d",&m);
    scanf("%d",&n);
    for(i=m;i<=n;i++)
    {
        temp=i;
        rev=0;
        while(temp>0)
        {
            d=temp%10;
            temp=temp/10;
            rev=rev*10+d;
        }
        if(i==rev)
        {
            printf("%d ",i);
        }
    }
    
    
}