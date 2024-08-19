#include<stdio.h>
#include<math.h>
int fun_name()
{
	int i,n;
	scanf("%d",&n);
	if(n==2){
		return 1;
	}for(i=2;i<=sqrt(n);i++)
	{
		if(n%i==0)
		{
			return 0;
		}
	}return 1;
}
int main()
{
	int res=fun_name();
	if(res==1){
		printf("prime number");
	}else{
		printf("not a prime number");
	}
}