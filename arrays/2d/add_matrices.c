#include<stdio.h>
int main()
{
	int f,b,c,d,i,j;
	scanf("%d%d%d%d",&b,&c,&d,&f);
	int a[b][c],z[d][f];
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<d;i++)
	{
		for(j=0;j<f;j++)
		{
			scanf("%d",&z[i][j]);
		}
	}
	for(i=0;i<b;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d ",a[i][j]+z[i][j]);
		}
		printf("\n");
	}
}