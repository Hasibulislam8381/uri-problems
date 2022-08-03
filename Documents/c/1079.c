#include <stdio.h>
int main()
{
    int n;
    float a, b, c, x, y, z;
    scanf("%d", &n);
    for (int i = 0; i < n; i++)
    {
        scanf("%f%f%f", &a, &b, &c);
        x = (a * 2 + b * 3 + c * 5) / 10.0;
        printf("%.1f\n", x);
    }
}