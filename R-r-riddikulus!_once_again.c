#include<stdio.h>
int main()
{
    int arr[100],n,i,x,flag=0,max=0;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=x;i<n;i++)
    {
        printf("%d ",arr[i]);
    }
    for(i=0;i<x;i++)
    {
        printf("%d ",arr[i]);
    }
        
        return 0;
}