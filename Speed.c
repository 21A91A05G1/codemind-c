#include<stdio.h>
int main()
{
    int arr[100],n,i,t,c=0,min;
    scanf("%d",&t);
    while(t--)
    {
        c=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        min=arr[0];
        for(i=0;i<n;i++)
        {
            if(arr[i]<=min)
            {
                c++;
                min=arr[i];
            }
        }
        printf("%d
",c);
    }
    
}