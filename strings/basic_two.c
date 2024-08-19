#include<stdio.h>
int main()
{
	char c[0];
	printf("Enter your name");
	scanf("%[^\n]s",c);
	printf(" My name is %s",c);
}