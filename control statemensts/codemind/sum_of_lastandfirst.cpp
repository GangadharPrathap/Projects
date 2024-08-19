#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int r,rem,sum=0;
	rem=n%10;
	while(n>0)
	{
		r=n%10;
		n=n/10;
	}
	sum=r+rem;
	printf("%d",sum);
}