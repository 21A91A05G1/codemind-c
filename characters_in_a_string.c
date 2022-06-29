#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int count=0;
    scanf("%[^
]s",str);
    for(int i=0;str[i]!=NULL;i++)
    {
        
        count++;
    }
    printf("%d",count);
}