#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    int i,j,len,startindex,endindex;
    scanf("%[^
]s",str);
    len=strlen(str);
    endindex = len - 1;

    for(i= len - 1;i>=0;i--)
    {
        if(str[i] == ' '|| i==0)
        {
            if(i==0)
            {
                startindex = 0;
            }
            else
            {
                startindex = i+1;
            }
            for(j=startindex;j<=endindex;j++)
            {
                printf("%c",str[j]);
            }
            endindex = i-1;
            printf(" ");
        }
    }
    return 0;
}