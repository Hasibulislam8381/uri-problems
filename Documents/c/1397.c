#include <stdio.h>
int main()
{
    int n, a, b;
    int count = 0;
    int equal = 0, second = 0;
    while (1)
    {
        scanf("%d", &n);
        if (n == 0)
            break;
            count=0;second=0;
        for (int i = 0; i < n; i++)
        {

            scanf("%d%d", &a, &b);
            if (a > b)
            {
                count++;
            }
            if (b > a)
            {
                second++;
            }
        }
        printf("%d %d\n", count, second);
    }
}