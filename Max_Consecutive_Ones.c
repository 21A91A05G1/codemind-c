#include<stdio.h>
int main()
{
    int arr[100],n,i,max=0,j,flag=0,c=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {c=0;
    for(j=i;j<n;j++)
    {
        
    
        if(arr[j]==1)
        {
            c++;
        }
        else
        {
            break;
        }
    }
    if(c>max)
    {
        max=c;
    }
    }
    printf("%d",max);
}