#include<stdio.h>
int main()
{
    int num,d,temp,rev=0;
    scanf("%d",&num);
    temp=num;
    while(num)
    {
        d=num%10;
        num=num/10;
        rev=rev*10+d;
        
    }
    printf("%d",rev);
}