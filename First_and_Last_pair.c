#include<stdio.h>
int main()
{
    int i,n,arr[100],l,m;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    l=n-1;
    m=l/2;
    if(n%2==0)
    {
    for(i=0;i<=l;i++,l--)
    {
        printf("%d %d ",arr[i],arr[l]);
    }
    }
        else
        {
            for(i=0;i<=l;i++,l--)
            {
                if(i!=m)
                {
                   printf("%d %d ",arr[i],arr[l]); 
                }
                else{
                    printf("%d %d ",arr[i],0);
                }
            }
        }
    }

