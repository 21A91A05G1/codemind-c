#include<stdio.h>
int main()
{
    int pr,flag=0,i,n;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        pr=i*i;
        if(n==pr)
        {
            flag=1;
        }
        
    }
    if(flag==1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }
}