#include<stdio.h>
int main()
{
    int sq=0,rev1=0,d1,rev=0,n,rs=0,d;
    scanf("%d",&n);
    sq=n*n;
    while(n)
    {
        d=n%10;
        n=n/10;
        rev=rev*10+d;
    }
    rs=rev*rev;
    while(rs)
    {
        d1=rs%10;
        rs=rs/10;
        rev1=rev1*10+d1;
    }
    if(rev1==sq)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}