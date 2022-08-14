#include <stdio.h>
#include <string.h>
int main()
{

    int n, i;
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        /* code */
        char input[51];
        int rigt_shift;
        scanf("%s", input);
        scanf("%d", &rigt_shift);
        int j, length = strlen(input);
        for (j = 0; j < length; j++)
        {
            /* code */

            char c = input[j] - rigt_shift;
            if (c < 65)
            {
                c = c + 26;
            }
            printf("%c", c);
        }
        printf("\n");
    }
}