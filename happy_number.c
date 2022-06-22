#include<stdio.h>
int main()
{
    int n,sum=0,sq,i,d;
    scanf("%d",&n);
    while(sq!=1 && sq!=4)
    {sq=0;
    while(n)
    {
        d=n%10;
        n=n/10;
        sq=sq+(d*d);
    }
    
    n=sq;
    }
    if(sq==1 || sq==7)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}