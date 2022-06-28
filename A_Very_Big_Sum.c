#include<stdio.h>
int main()
{
    long int sum=0;
    int arr[100],n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<n;i++)
    {
          sum=sum+arr[i];
 }
        
    
    printf("%li",sum);
}