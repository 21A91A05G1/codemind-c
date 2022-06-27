#include<stdio.h>
int prime(int s)
{
    int i,j,s2,c=0,k;
    for(i=1;i<10;i++)
    {
        c=0;
        s2=s+i;
        for(j=2;j<s2;j++)
        {
            if(s2%j==0)
            {
                c++;
            }
        }
        if(c==0)
        {
            k=i;
            break;
        }
    }
    return k;
}
int main()
{
    int s,a,b,k;
    scanf("%d%d",&a,&b);
    s=a+b;
    k=prime(s);
    printf("%d",k);
    
}