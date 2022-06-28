#include<stdio.h>
int main()
{
    int arr[100],i,n,j,c=0,b,max=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {c=0;
        
        for(j=i;j<n;j++)
        {
            if(arr[i]==arr[j])
            {
                c++;
            }
        }
        if(c==max && arr[i]<b)
        {
            b=arr[i];
        }
        if(c>max)
        {
            max=c;
            b=arr[i];
        }
    }
    printf("%d",b);
}
    