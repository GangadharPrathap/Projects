#include<stdio.h>
int palin(int a)
{
	int o,rev=0,rem;
	o=a;
	while(a!=0)
	{
		rem=a%10;
		rev=rev*10+rem;
		a=a/10;
	}
	if(o==rev)
	{
		return 1;
	}else{
		return 0;
	}
}
int prime(int a)
{
		int i,s=0;
	for(i=1;i<=a;i++)
	{
		if(a%i==0)
		{
			s=s+1;
		}
	}
	if(s==2){
		return 1;
	}else{
		return 0;
	}
}
void prime_palin(int a)//function declaration
{
	if(prime(a) && palin(a))//101    1	1--1	
	{
		printf("prime palindrome");
	}else{
		printf("not a prime palindrome");
	}
}
int main()
{
	int a;
	scanf("%d",&a);
	prime_palin(a);//function calling
}