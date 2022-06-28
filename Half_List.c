#include<stdio.h>
int main()
{
    int a[100],i=0,n,fh=0,c=0,sh=0,d;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    d=n/2;
    for(i=n-1;i>=0;i--)
    {
        if(i==(d-1))
        {
            break;
        }
        printf("%d ",a[i]);
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
        if(i==(d-1))
        {
            break;
        }
    }
}
