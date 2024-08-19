//Disarium number 175.89.135.518
#include<stdio.h>
#include<math.h>
void dis(int n)///175
{
    int s=0,i,a,b,d,r=0;
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
    	printf("false");
    }
}
int main()
{
	int n;
	scanf("%d",&n);
	dis(n);
}