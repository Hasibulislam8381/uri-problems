#include <stdio.h>
int main()
{
    int a, b, c;
    while (scanf("%d%d%d", &a, &b, &c) != EOF)
    {
        /* code */
        if (a == b && b == c)
        {
            printf("*\n");
        }
        else if (b == c)
        {
            printf("A\n");
        }
        else if (a == b)
        {
            printf("C\n");
        }
        else if (a == c)
        {
            printf("B\n");
        }
    }
}