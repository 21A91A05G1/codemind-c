#include<stdio.h>
int main()
{
    int a,b,c,n;
    scanf("%d",&n);
    a=0;
    b=1;
    while(1)
    {
        c=a+b;
        if(c==n)
        {
            printf("True");
            break;
        }
        if(c>n)
        {
            printf("False");
            break;
        }
        a=b;
        b=c;
    }
}