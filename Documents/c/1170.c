#include <stdio.h>
int main()
{
    int n;
    float x;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%f", &x);
        int dias = 0;
        while (x > 1)
        {
            /* code */
            x = x / 2;
            dias++;
        }
        printf("%d dias\n", dias);
    }
}