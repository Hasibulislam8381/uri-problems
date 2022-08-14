#include <stdio.h>
int main()
{
    int a[1000], n, pos;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        scanf("%d", &a[i]);
    }
    int small = a[0];
    for (int i = 0; i < n; i++)
    {
        if (a[i] < small)
        {
            small = a[i];
            pos = i;
        }
    }
    printf("Menor valor: %d\n", small);
    printf("Posicao: %d\n", pos);
}