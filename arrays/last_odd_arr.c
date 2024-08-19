// write a program the last odd nuber of the array
#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int odd=0,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++)
	{
		if(arr[i]%2!=0)
		{
			odd=arr[i];
		}
	}
	printf("%d",odd);
}