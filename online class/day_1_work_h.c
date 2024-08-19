#include <stdio.h>
void printOppositeSigns(int arr[], int n) {
    int i;
    int sign=1;
    for (i=0;i<n;i++) 
	{
        if (arr[i]*sign< 0) 
		{
            printf("%d ",arr[i]);
            sign *= -1; 
        }
    }
}
int main() 
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++)
    {
    	scanf("%d",&arr[i]);
	}
    printOppositeSigns(arr[n],n);
}