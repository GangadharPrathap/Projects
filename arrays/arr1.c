#include<stdio.h>
int main()
{
	int i,arr[5]={2,3,4,5,6};
	for(i=0;i<5;i++)
	{
		printf("%d=%d=%d\n",i,&arr[i],arr[i]);
	}
}