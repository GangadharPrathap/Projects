#include<stdio.h>
#include<string.h>
int main()
{
    char str[100];
    scanf("%[^\n]s",str);
    int i,max=0,n;
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            n=str[i];
            if(n>max)
            {
                max=n;
            }
        }
    }printf("%c",max);
}		