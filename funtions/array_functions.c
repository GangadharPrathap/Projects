// sum of array elements

#include<stdio.h>
void print_arr(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
	 printf("%d\n",a[i]);
		sum=sum+a[i];
	}	printf("%d",sum);
}
int main()		
{
	int n;
	scanf("%d",&n);
	int a[n],i;
	for(i=0;i<n;i++)
	{    
		scanf("%d",&a[i]);
	}
	print_arr(a,n);
}           