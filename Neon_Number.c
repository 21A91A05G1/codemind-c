#include<stdio.h>
int main()
{
    int n,d,sum=0,sq;
    scanf("%d",&n);
    sq=n*n;
    while(sq)
    {
        d=sq%10;
        sq=sq/10;
        sum=sum+d;
    }
    if(sum==n)
    {
        printf("Neon Number");
    }
    else
    {
        printf("Not Neon Number");
    }
}   