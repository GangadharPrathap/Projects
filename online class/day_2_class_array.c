//How to print the given array in ascending order
#include<stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<(n);i++)
	{
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n-1;i++)//1 3 2 5 6 7
	{
		for(int j=0;j<n-i-1;j++)
		{
			if(arr[j]>arr[j+1])
			{
			int temp=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=temp;
			}
		}
	}for(int i=0;i<n;i++)
	{
		printf("%d ",arr[i]);
	}
}