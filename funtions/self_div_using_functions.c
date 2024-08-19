#include<stdio.h>
int self_div(int n)
{
	int temp=n,r;
	while(n!=0)
	{
		r=n%10;
		if(r=0||temp%r!=0)
		{
			n=n/10;
		}
	}return 1;

}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	for(int i=n;i<=m;i++)
	{
		if(self_div(i)==1)
		{
			printf("%d",i);
		}
	}
}