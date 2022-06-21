#include<stdio.h>
int main()
{
    char str[20];
    int i,zc=0,oc=0;
    scanf("%s",str);
    for(i=0;str[i]!=NULL;i++)
    {
        if(str[i]=='z')
        {
            zc++;
        }
        else
        {
            oc++;
        }
    }
    if(zc*2==oc)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}