#include <stdio.h>
#define FALSE 0
#define TRUE 1
int main()
{
    int n, x, marry = 0, jhon = 0;

    while (TRUE)
    {
        /* code */
        scanf("%d", &n);
        if (n == 0)
            break;
        marry = 0;
        jhon = 0;
        for (int i = 0; i < n; i++)
        {
            /* code */
            scanf("%d", &x);
            if (x == 0)
            {
                marry++;
            }
            else
            {
                jhon++;
            }
        }
        printf("Mary won %d times and John won %d times\n", marry, jhon);
    }
}