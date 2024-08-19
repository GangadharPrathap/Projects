#include<stdio.h>
int fact(int n)
{
	if(n>1)
	{
		return n*fact(n-1);
	}else{
		return 1;
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	int res;
	res=fact(n);
	printf("Factorial of %d=%d",n,res);
}