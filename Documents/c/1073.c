#include <stdio.h>
#include <math.h>
int main()
{
    int n, res;

    scanf("%d", &n);
    for (int i = 2; i <= n; i += 2)
    {
        res = pow(i, 2);
        printf("%d^2 = %d\n", i, res);
    }
}