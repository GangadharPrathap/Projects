#include<stdio.h>
#include<math.h>
int main()
{
    int n,s=0,i,a,b,d,r=0;
    scanf("%d",&n);
    a=n;
    b=n;
    while(n>0)
    {    
        r++;
        n=n/10;
    }
    for(i=r;i>=1;i--)
    {
        d=a%10;
        s+=pow(d,i);
        a=a/10;
    }if(s==b)
    {
        printf("True");
    }else
	{
        printf("False");
    }
}