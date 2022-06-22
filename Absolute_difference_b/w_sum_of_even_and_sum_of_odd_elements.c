#include<stdio.h>
#include<stdlib.h>
int main()
{
    int i,n,arr[100],es=0,os=0,res;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]%2==0)
        {
            es=es+arr[i];
        }
        else
        {
            os=os+arr[i];
        }
    }
    res=abs(os-es);
    printf("%d",res);
}