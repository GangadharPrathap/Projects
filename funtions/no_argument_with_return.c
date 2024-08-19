#include <stdio.h>
int add()
{
    int a = 158, b = 20, c;
    c = a + b;
    return c;
}
int main()
{
    int res;
    res = add();
    printf("%d", res);
}