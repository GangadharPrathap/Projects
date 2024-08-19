#include<stdio.h>
int main()
{
	int i,j,a,b;
	printf("enter the order of matrix =");
	scanf("%d%d",&a,&b);
	printf("enter the elements :");
	int arr[a][b];
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			scanf("%d",&arr[i][j]);
		}
	}
	for(i=0;i<a;i++)
	{
		for(j=0;j<b;j++)
		{
			printf("%d ",arr[i][j]);
		}
	printf("\n");
	}
}
