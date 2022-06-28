#include<stdio.h>
int self(int n)
{
    int temp,dc=0,d,c=0;
    temp=n;
    while(n>0)
    {
        d=n%10;
        n=n/10;
        dc++;
        if(d==0)
        {
            return 0;
        }
        else
        {
            if(temp%d==0)
            {
                c++;
            }
        }
    }
    if(dc==c)
    {
        return 1;
    }
    return 0;
}
int main()
{
    int n,temp,i,a,b;
    scanf("%d%d",&a,&b);
    temp=n;
    for(i=a;i<=b;i++)
    {
        if(self(i)==1)
        {
            printf("%d ",i);
        }
    }
}