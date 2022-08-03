#include <stdio.h>
int main()
{
    int n, a[10];

    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }
    for (int i = 0; i < n; i++)
    {
        /* code */
        if ((a[i] % 2 == 1 || a[i] % 2 == -1) && a[i] < 0)
        {
            printf("ODD NEGATIVE\n");
        }
        else if (a[i] == 0)
        {
            printf("NULL\n");
        }
        else if (a[i] % 2 == 0 && a[i] > 0)
        {
            printf("EVEN POSITIVE\n");
        }
        else if (a[i] > 0 && (a[i] % 2 == 1 || a[i] % 2 == 1))
        {
            printf("ODD POSITIVE\n");
        }

        else if (a[i] % 2 == 0 && a[i] < 0)
        {
            printf("EVEN NEGATIVE\n");
        }
    }
}