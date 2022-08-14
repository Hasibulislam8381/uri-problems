#include <stdio.h>
int main()
{
    int n, a, b, count = 0, inter = 0, gremio = 0, tie = 0;
    while (1)
    {
        scanf("%d%d", &a, &b);
        printf("Novo grenal (1-sim 2-nao)\n");
        if (a > b)
        {
            inter++;
        }
        else if (b > a)
        {
            gremio++;
        }
        else if (a == b)
        {
            tie++;
        }

        scanf("%d", &n);
        count++;
        if (n == 1)
            continue;
        if (n == 2)
            break;
    }

    printf("%d grenais\n", count);
    printf("Inter:%d\n", inter);
    printf("Gremio:%d\n", gremio);
    printf("Empates:%d\n", tie);
    if (inter > gremio)
    {
        printf("Inter venceu mais\n", inter);
    }
    else
    {
        printf("Gremio venceu mais\n", gremio);
    }
}