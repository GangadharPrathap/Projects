#include<stdio.h>
#include<string.h>
int main()
{
    int i,sum=0;
    char str[100];
    scanf("%[^\n]s",str);
    for(i=0;str[i]!='\0';i++)
    {
        if(str[i]>='0' && str[i]<='9')
        {
            sum=sum+str[i]-'0';
        }
    }printf("%d",sum);
}