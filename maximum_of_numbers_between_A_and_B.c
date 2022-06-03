#include<stdio.h>
int main()
{
    int arr[100],i,n,k,l,c=0,max;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d%d",&k,&l);
    max=arr[0];
    for(i=0;i<n;i++)
    {
        if(arr[i]>=k && arr[i]<=l)
        {
            if(max<arr[i])
            {
                c++;
                max=arr[i];
            }
        }
    }
    if(c==0)
    {
        printf("-1");
    }
    else
    {
        printf("%d",max);
    }
}