#include<stdio.h>
void count(int *arr,int n)
{
    int j,c=0,i;
    
    for(i=0;i<n;i++)
    {
        for(j=1;j<n;j++)
        {
            if(arr[i]==arr[j] && i!=j)
            {
                c++;
            }
        }
        printf("%d %d",arr[i],c);
    }
}
        int main()
        {
            int n,arr[100],i,se,j,c=0;
            scanf("%d",&n);
            for(i=0;i<n;i++)
            {
                scanf("%d",&arr[i]);
            }
            for(i=0;i<n;i++)
            {c=1;
            for(j=0;j<n;j++)
            {
                if(arr[i]==arr[j] && i!=j)
                {
                    c++;
                    arr[j]=-1;
                }
            }
            if(arr[i]!=-1)
            printf("%d %d ",arr[i],c);
        }
        }