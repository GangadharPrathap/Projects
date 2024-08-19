//write a program to print 1-n numbers 
#include<stdio.h>
int main()
{
	int a,i=1;
	scanf("%d",&a);
	do
	{
		printf("%d ",i);
		i++;
	}
	while(i<=a);
}