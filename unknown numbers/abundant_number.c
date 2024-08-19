#include<stdio.h>
int main()
{
	int a,i,sum=0;
	scanf("%d",&a);
	for(i=1;i<a;i++)
	{
		if(a%i==0)
		{
			sum=sum+i;
		}
	}if(sum>a)
	{
		printf("%d is an Abundant number",a);
	}else{
		printf("%d is not an Abundant number",a);
	}
}