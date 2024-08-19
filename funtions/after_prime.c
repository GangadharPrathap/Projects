#include<stdio.h>
int prime(int a)
{
	int i,c=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			c++;
		}
	}
	if(c==2)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
int main()
{
	int a,i;
	scanf("%d",&a);

	for(i=a+1;;i++)
	{
		if(prime(i))
		{
			printf("%d ", i);
			break;
		}
	}

}