#include<stdio.h>
int main()
{
    int i,j,num,isPrime,c=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            isPrime = 1;
            for(j=2;j<=i/2;j++)
            {
                if(i%j==0)
                {
                    isPrime = 0;
                    break;
                }
            }
            if(isPrime==0)
            {
                c++;
            }
        }
    }
    printf("%d",c+1);
    return 0;
}