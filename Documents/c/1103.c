#include <stdio.h>
int main()
{
    int h1, m1, h2, m2, x, y, a, b, ans = 0;
    while (scanf("%d%d%d%d", &h1, &m1, &h2, &m2) == 4)
    {
        if (h1 == 0 && m1 == 0 && h2 == 0 && m2 == 0)
            break;
        if (h1 < h2)
        {
            a = h1 * 60 + m1;
            b = h2 * 60 + m2;
            printf("%d\n", b - a);
        }
        if (h1 > h2)
        {
            a = (24 * 60) - (h1 * 60 + m1);
            b = (h2 * 60) + m2;
            printf("%d\n", a + b);
        }
        if (h1 == h2)
        {
            if (m2 > m1)
            {
                ans = m2 - m1;
                printf("%d\n", ans);
            }
            else
            {
                a = (24 * 60) - (h1 * 60 + m1);
                b = (h2 * 60) + m2;
                printf("%d\n", a + b);
            }
        }
    }
}