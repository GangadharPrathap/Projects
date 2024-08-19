//next prime palindrome
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
int palin(int n) 
{
    int o,rev=0,rem;
    o = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (o == rev)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void next_prime_palin(int n)
{
	int i;
	for(i=n+1;;i++)
	{
	if(prime(i) && palin(i))
		{
			printf("%d ",i);
			break;
		}
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	next_prime_palin(n);
}