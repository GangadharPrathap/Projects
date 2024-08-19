#include <stdio.h>
int maxi(int ar[], int n)
{
    int ma = ar[0];
    for (int i = 1; i < n; i++)
    {
        if (ar[i] > ma)
        {
            ma = ar[i];
        }
    }
    return ma;
}
int mini(int ar[], int n)
{
    int mi = ar[0];
    for (int i = 1; i < n; i++)
    {
        if (ar[i] < mi)
        {
            mi = ar[i];
        }
    }
    return mi;
}
int main()
{
    int n;
    scanf("%d", &n);
    int ar[n], i;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &ar[i]);
    }
    int min = mini(ar, n);
    int max = maxi(ar, n);
    printf("the maximumvalue of array is %d\n", max);
    printf("the minimumvalue of array is %d", min);
}