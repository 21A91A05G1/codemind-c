#include<stdio.h>
int main()
{
    int arr[100],N,a[20],b[20],c[40],i;
    scanf("%d",&N);
    for(i=0;i<N;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<N;i++)
    {
        scanf("%d",&b[i]);
    }
     for(i=0;i<N;i++)
    {
        c[i]=a[i]+b[i];
        printf("%d ",c[i]);
    }

}
