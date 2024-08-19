#include <stdio.h>
void add(int a, int b)
{
    int c;
    c = a + b;
    printf("%d", c);
}
int main()
{
    int a=1, b=1;
    scanf("%d%d", &a, &b);
    add(a, b);
}