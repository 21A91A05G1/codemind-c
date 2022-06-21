#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int l,i,n,m;
    scanf("%[^
]s",str);
    scanf("%d%d",&n,&m);
    for(i=n;i<=m;i++)
    {
        printf("%c",str[i]);
    }
}