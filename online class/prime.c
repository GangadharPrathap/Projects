#include<stdio.h>
#include<stdbool.h>
#include<math.h>
bool prime(int n)
{
	if(n<=1){
		return false;
	}
	if(n==2){
		return true;
	}for(int i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return false;
		}
	}
	return true;
}
int main()
{
	int n;
	scanf("%d",&n);
	int cnt;
	if(prime(n))
	{
		printf("prime");
	}else{
		printf("not prime");
	}
}