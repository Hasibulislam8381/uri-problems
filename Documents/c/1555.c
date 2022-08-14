#include <stdio.h>
#include <math.h>
int main()
{
    int n, x, y, a, b, c;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d%d", &x, &y);
        a = pow(3 * x, 2) + pow(y, 2);
        b = 2 * pow(x, 2) + pow(5 * y, 2);
        c = -100 * x + pow(y, 3);
        if (a > b && a > c)
        {
            printf("Rafael ganhou\n");
        }
        else if (b > c)
        {
            /* code */
            printf("Beto ganhou\n");
        }
        else
        {
            printf("Carlos ganhou\n");
        }
        a = 0;
        b = 0;
        c = 0;
    }
}