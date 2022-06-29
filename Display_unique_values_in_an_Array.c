#include<stdio.h>
int main()
{
    int arr[20],val[20],n,i,j,flag=0,count=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
        val[i]=-1;
    }
    for(i=0;i<n;i++)
    {
        count=1;
        for(j=i+1;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                count++;
                val[j]=0;
            }
        }
        if(val[i]!=0)
        {
            val[i]=count;
        }
        
    }
    for(i=0;i<n;i++)
    {
        if(val[i]==1)
        {
            flag=1;
            printf("%d ",arr[i]);
        }
    }
    if(flag==0)
    {
        printf("-1");
    }
}