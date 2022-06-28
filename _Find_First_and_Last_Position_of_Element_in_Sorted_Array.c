#include<stdio.h>
int main()
{
    int arr[100],n,i,flag=0,t;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&t);
    for(i=0;i<n;i++)
    {
        if(arr[i]==t)
        {
            flag=1;
            printf("%d ",i);
            break;
        }
    }
        for(i=n-1;i>=0;i--)
        {
            if(arr[i]==t)
            {
                flag=1;
                printf("%d",i);
                break;
            }
        }
        if(flag==0)
        {
            printf("-1 -1");
        }
    
    
}