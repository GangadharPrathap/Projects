#include <stdio.h>
int main()
{
    int n, d = 0;
    scanf("%d", &n);
    int arr[n], i, f = 0;
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (i = 0; i < n; i++)
    {
        if (arr[i] % 2 != 0 && i % 2 != 0)
        {
            f++;
        }
    }
    if (f > 0)
        printf("STRICTLY ODD");
    else
        printf("NOT STRICTLY ODD");
}
