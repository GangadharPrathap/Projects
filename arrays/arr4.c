#include<stdio.h>
int main()
{
	int a,i,sum=0;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i>=a;i++)
	{
		if(i%2==0)
		{
			sum=sum+i;
			printf("%d",i);
		}
	}printf("%d",sum);
}