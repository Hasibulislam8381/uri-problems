#include <stdio.h>
int main()
{
    int n, count = 0, nCount = 0;
    long long int x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%lld", &x);
        if (x >= 10 && x <= 20)
        {
            count++;
        }
        else
        {
            nCount++;
        }
    }
    printf("%d in\n", count);
    printf("%d out\n", nCount);
}