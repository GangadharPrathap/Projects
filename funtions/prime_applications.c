#include<stdio.h>
#include<math.h>
int prime(int n)
{
	int i,c=0;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		{
			c++;
		}
	}if(c==2){
		return 1;
	}else{
		return 0;
	}
}
int main()
{
	int n,i,np=0,bp=0;
	scanf("%d",&n);
	for(i=n-1;;i--)
	{
		if(prime(i))
		{
			bp=i;
			break;
		}
	}
	for(i=n+1;;i++)
	{
		if(prime(i))
		{
			np=i;
			break;
		}
	}
	if(n-bp<np-n)
	{
		printf("%d",bp);
	}
	else if(n-bp>np-n)
	{
		printf("%d",np);
	else
	{
		printf("%d %d",np,bp);
	}
}