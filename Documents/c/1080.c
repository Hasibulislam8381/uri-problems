#include <stdio.h>
int main()
{
    int a[100], max, p;
    for (int i = 1; i <= 5; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    max = a[0];
    for (int i = 1; i <= 5; i++)
    {
        if (a[i] > max)
        {
            max = a[i];
            p = i;
        }
    }
    printf("%d\n%d\n", max, p);
}