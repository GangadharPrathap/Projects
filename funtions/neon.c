//Neon Number 
#include<stdio.h>
void neon(int n)
{
	int x,i,c=0;
	i=n*n;
	while(i!=0)
	{
		x=i%10;
		c=c+x;
		i=i/10;
	}
	if(n==i+c)
	{
		printf("Neon Number");
	}else{
		printf("Not a Neon Number");
	}
}
int main()
{
	int n;
	scanf("%d",&n);
	neon(n);
}