#include<stdio.h>
int sum(int n)
{
	if(n>0)
	{
		return n+sum(n-1);
	}else{
		return 0;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int res=sum(n);
	printf("sum of %d natural numbers is:%d",n,res);
}