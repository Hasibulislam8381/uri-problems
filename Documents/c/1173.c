#include <stdio.h>
int main()
{
    int n[10], x, v;
    scanf("%d", &x);
    for (int i = 0; i < 10; i++)
    {
        n[i] = x;
        printf("N[%d] = %d\n", i, n[i]);
        x = x * 2;
    }
}