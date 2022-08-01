#include <stdio.h>
int main()
{
    int a, b, sum = 0, temp, n;
    scanf("%d%d", &a, &b);
    if (a > b)
    {
        temp = b;
        b = a;
        a = temp;
    }
    if (a % 2 == 0)
    {
        a++;
        n = a;
    }
    else
    {
        n = a + 2;
    }
    for (int i = n; i < b; i = i + 2)
    {

        sum = sum + i;
    }
    printf("%d", sum);
}