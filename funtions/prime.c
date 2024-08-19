//write a porggram to check the given no is prime or not using functions
#include<stdio.h>
int pri(int a)
{
 	int i,s=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			s=s+1;
		}
	}
	return s;
}
int main()
{
	int a;
	scanf("%d",&a);
	int s=pri(a);
	if(s==2)
	{
		printf("prime");
	}
	else
	{
		printf("nto a prime");
	}
}