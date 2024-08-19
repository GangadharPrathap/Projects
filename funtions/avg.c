#include<stdio.h>
float avg(int n,int s)
{
	float res;
	res=(n+s)/2.0;
	return res;
}
int main()
{
	float res;
	int n,s;
	scanf("%d%d",&n,&s);
	res=avg(n,s);
	printf("%.2f",res);
}