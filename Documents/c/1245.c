#include <stdio.h>
int main()
{
    int i, j, k, n, size[10000];
    char size_char[10000];
    while (scanf("%d", &n) != EOF)
    {
        /* code */
        int count = 0;
        for (i = 0; i < n; i++)
        {
            /* code */
            scanf("%d %c", &size[i], &size_char[i]);
        }
        for (i = 0; i < n; i++)
        {
            /* code */
            for (j = 0; j < n; j++)
            {
                /* code */
                if (size[i] == size[j] && size_char[i] != size_char[j])
                {
                    count++;
                    size[i] = 0;
                    size[j] = 0;
                    size_char[i] = 0;
                    size_char[j] = 0;
                }
            }
        }
        printf("%d\n", count);
    }
}