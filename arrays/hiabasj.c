#include<stdio.h>
int main()
{
	int n,h,i=0,c,d=0;
	scanf("%d",&n);
	while(n!=0)
	{
		h=n%10;
		if(h>d && h%2==0) {
			d=h;
		}
		n=n/10;
	}printf("%d",d);
}