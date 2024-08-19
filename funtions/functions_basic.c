#include <stdio.h>
int add()
{
    int a, b;
    float c;
    scanf("%d%d", &a, &b);
    c = (a + b) / 2.0;
    printf("%.2f", c);
}
int main()
{
    add();
}