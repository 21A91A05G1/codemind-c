#include<stdio.h>
int isascending(int *arr,int n)
{
    int i,c=0;
    for(i=0;i<n;i++)
    {
        if(arr[i]<arr[i+1])
        {
            c++;
        }
    }
    if(c==n-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int n,arr[100],i,j,temp,c=0,flag=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(isascending(arr,n))
    {
        printf("yes");
    }
    else
    {
        printf("no");
    }
}