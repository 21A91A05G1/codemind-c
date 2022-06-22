#include<stdio.h>
int main()
{
    int arr[100][100],i,j,n,sum=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        for(j=0;j<2;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {sum=0;
    for(j=0;j<2;j++)
    {
        sum=sum+arr[i][j];
    }
    printf("%d
",sum);
    }
}