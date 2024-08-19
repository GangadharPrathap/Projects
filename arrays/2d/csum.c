#include<stdio.h>
int main()
{
	int i,j,a,m,n;
	scanf("%d%d",&m,&n);
	int arr[m][n];
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	int b,sum=0;
	scanf("%d",&b);
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(i=b)
			{
				sum=sum+arr[i][j];
			}
		}
	}printf("%d",sum);
}