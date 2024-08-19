#include <stdio.h>
int palin() // function definition
{
    int n, o, rev = 0, rem;
    scanf("%d", &n);
    o = n;
    while (n != 0)
    {
        rem = n % 10;
        rev = rev * 10 + rem;
        n = n / 10;
    }
    if (o == rev)
    {
        printf("PALIN");
    }
    else
    {
        printf("NOT PALIN");
    }
}
int main()
{
    palin(); // function call
}