#include <stdio.h>
int main()
{
    int i = 1, j;
    j = 60;
    while (j >= 0)
    {
        /* code */
        printf("I=%d J=%d\n", i, j);
        i += 3;
        j -= 5;
    }
}