#include <stdio.h>
int main()
{
    int d, h, m, s, d1, h1, m1, s1, d2, h2, m2, s2, total1, total2, data;
    char day1[5], day2[5], del[5];
    scanf("%s %d %d %s %d %s %d", &day1, &d1, &h1, &del, &m1, &del, &s1);
    scanf("%s %d %d %s %d %s %d", &day2, &d2, &h2, &del, &m2, &del, &s2);
    total1 = s1 + m1 * 60 + h1 * 60 * 60 + d1 * 24 * 60 * 60;
    total2 = s2 + m2 * 60 + h2 * 60 * 60 + d2 * 24 * 60 * 60;
    data = total2 - total1;
    d = data / (24 * 60 * 60);
    h = (data - d * 24 * 60 * 60) / (60 * 60);
    m = (data - d * 24 * 60 * 60 - h * 60 * 60) / 60;
    s = data - d * 24 * 60 * 60 - h * 60 * 60 - m * 60;

    printf("%d dia(s)\n", d);
    printf("%d hora(s)\n", h);
    printf("%d minuto(s)\n", m);
    printf("%d segundo(s)\n", s);
}