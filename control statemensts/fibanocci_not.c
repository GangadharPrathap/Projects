#include<stdio.h>
int main()
{
	int a=0,b=1,c,n,i,f=0;
	scanf("%d",&n);
	c=a+b;
	for(i=1;i<=n;i++)
	{
		c=a+b;
		if(c==n)
		{
			printf("True");
			f=1;
			break;
		}a=b;
		b=c;
	}
	if(f==0)
	{
		printf("False");
	}
}