#include<stdio.h>
int main()
{
	int u,n;
	scanf("%d",&n);
	int arr[n];
	for(u=0;u<n;u++)
	{
		scanf("%d",&arr[u]);
	}
	for(u=0;u<n;u++)
	{
		printf("%d ",arr[u]);
	}
}