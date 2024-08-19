#include <stdio.h>
int search(int ar[], int n)
{
    int sl;
    scanf("%d", &sl);
    for (int i = 0; i <= n; i++)
    {
        if (ar[i] == sl)
        {
            return 1;
        }
        else
        {
            return 0;
        }
    }
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
    int res = search(ar, n);
    if (res == 1)
    {
        printf("PRESENT");
    }
    else
    {
        printf("ABSENT");
    }
}