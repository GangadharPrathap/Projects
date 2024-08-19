#include<stdio.h>
int main()
{
	int i,n;
	scanf("%d",&n);
	int max,arr[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&arr[i]);
	}
	     max=arr[0];
	for(i=0;i<n;i++)
		if(arr[i]>max)
		{
			max=arr[i];
		}
			printf("%d",max);
}