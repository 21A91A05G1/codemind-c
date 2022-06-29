#include<stdio.h>
int main()
{
    char s[20];
    int i;
    scanf("%s",s);
    for(i=0;s[i]!=NULL;++i);
    
    printf("%d",i);
    return 0;
    
}