//count the even or odd values in an array
#include<stdio.h>
int main()
{
	int c=0,a,i;
	scanf("%d",&a);
	int arr[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&arr[i]);
		if(arr[i]%2!=0)
		{
			c=c+1;
		}
	}printf("count=%d",c);
}