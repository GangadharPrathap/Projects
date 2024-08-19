#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	int i,ar[a];
	for(i=0;i<a;i++)
	{
		scanf("%d",&ar[i]);
	}
	int s;
	scanf("%d",&s);
	for(int i=0;i<a;i++)
	{
		if(ar[i]==s)
		{
			a=1;
			break;
		}
	}
	if(a==0){
		printf("Not Found");
	}
	else
	{
		printf("Element is found");
	}
}