#include <stdio.h>
#include <string.h>
int main()
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        /* code */
        char a[1000];
        scanf("%s", &a);
        int j, total_leds = 0;
        for (j = 0; j < strlen(a); j++)
        {
            /* code */
            if (a[j] == '1')
            {
                total_leds += 2;
            }
            else if (a[j] == '2')
            {
                /* code */
                total_leds += 5;
            }
            else if (a[j] == '3')
            {
                /* code */
                total_leds += 5;
            }
            else if (a[j] == '4')
            {
                /* code */
                total_leds += 4;
            }
            else if (a[j] == '5')
            {
                /* code */
                total_leds += 5;
            }
            else if (a[j] == '6')
            {
                /* code */
                total_leds += 6;
            }
            else if (a[j] == '7')
            {
                /* code */
                total_leds += 3;
            }
            else if (a[j] == '8')
            {
                /* code */
                total_leds += 7;
            }
            else if (a[j] == '9')
            {
                /* code */
                total_leds += 6;
            }
            else if (a[j] == '0')
            {
                /* code */
                total_leds += 6;
            }
        }
        printf("%d leds\n", total_leds);
    }
}
