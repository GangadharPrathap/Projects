#include<stdio.h>
int rever(int n)
{
	int rev=0,rem;
	while(n>0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}return rev;
}
int main()
{
	int n;
	scanf("%d",&n);
	int rev;
	rev=rever(n);
	printf("%d",rev);
}