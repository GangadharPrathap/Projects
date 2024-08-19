///print prime count and non prime count in an array
#include<stdio.h>
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
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
int prime_non_prime_count(int a[],int n)
{
	int i,pc=0,npc=0;
	for(i=0;i<n;i++)
	{
		if(prime(a[i]))
		{
			pc++;
		}
		else
		{
			npc++;
		}
	}printf("pc=%dnpc=%d",pc,npc);
}
int main()
{
	int n;
	scanf("%d",&n);
	int i,a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	prime_non_prime_count(a,n);
}