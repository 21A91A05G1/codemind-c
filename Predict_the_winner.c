#include<stdio.h>
int winner(int*arr,int n)
{

    int c=0,c1=0,i,c2=0,c3=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
       if(arr[i]%4==0)
       {
           c+=1;
       }
       else if(arr[i]%4==1)
       {
           c1+=1;
       }
        else if(arr[i]%4==2)
       {
           c2+=1;
       }
        else if(arr[i]%4==3)
       {
           c3+=1;
       }
    }
    if(c%2==0 && c1%2==0 && c2%2==0 && c3==0)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
int main()
{
    int arr[100],i,n,c=0,c1=0,c2=0,c3=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    if(winner(arr,n)==1)
    {
        printf("X");
    }
    else
    {
        printf("Y");
    }
}
       