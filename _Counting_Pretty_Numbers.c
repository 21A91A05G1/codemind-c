#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    while(n--)
    {
        int l,r,c=0,i,d;
        scanf("%d%d",&l,&r);
        for(i=l;i<=r;i++)
        {
            d=i%10;
            if(d==2 || d==3 || d==9)
            {
                c++;
            }
        }
     
        printf("%d
",c);
    }
}