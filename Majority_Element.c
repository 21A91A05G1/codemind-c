#include<stdio.h>
int main()
{
    int n,arr[20],c=0,i,j;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {c=1;
    
        if(arr[i]!=-1)
        {
            for(j=0;j<n;j++)
            {
                if(arr[i]==arr[j] && i!=j)
                {
                    c++;
                    arr[j]=-1;
                }
            }
            if(c>n/2)
            {
                printf("%d",arr[i]);
            }
        }
    }
}
    