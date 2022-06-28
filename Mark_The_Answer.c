#include<stdio.h>
int main()
{
    int arr[100],n,i,max=0,flag=0,x;
    scanf("%d%d",&n,&x);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        if(arr[i]<=x)
        {
            max++;
        }
        else
        {
            if(flag==0)
            {
                flag=1;
            }
            else
            {
                break;
            }
        }
    }
    printf("%d",max);
    return 0;
}