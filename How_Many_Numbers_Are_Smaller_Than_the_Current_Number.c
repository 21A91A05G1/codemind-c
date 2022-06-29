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
    {c=0;
    
        
            for(j=0;j<n;j++)
            {
                if(arr[j]<arr[i])
                {
                    c++;
                }
                }
            
            
                printf("%d ",c);
            }
            }
        
    