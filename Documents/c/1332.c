#include <stdio.h>
#include <string.h>
int main()
{
    char str[10];
    unsigned short n, i;
    scanf("%hu", &n);
    for (i = 0; i < n; i++)
    {
        /* code */
        scanf("%s", str);
        if (strlen(str) == 5)
        {
            printf("3\n");
        }
        else if ((str[0] == 'o' && str[1] == 'n') || (str[1] == 'n' && str[2]) == 'e' || (str[0] == 'o' && str[2] == 'e'))
        {
            printf("1\n");
        }
        else
        {
            printf("2\n");
        }
    }
}