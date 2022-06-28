#include<stdio.h>
int main()
{
    int i,n,arr[100],avg=0,flag=0,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
        
        
            sum=sum+arr[i];
        
    }
    avg=sum/n;
    for(i=0;i<n;i++)
    {
        if(arr[i]==avg)
        {
            flag=1;
            break;
        }
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
    
}