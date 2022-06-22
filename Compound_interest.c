#include<stdio.h>
#include<math.h>
int main()
{
    double p,r,t,a=0,b=0,c=0;
    double ci;
    scanf("%lf%lf%lf",&p,&r,&t);
    a=1+r/100;
    b=pow(a,t);
    c=p*b;
    printf("%.2lf",c);
}