#include <stdio.h>
int main()
{
    int ih, im, fh, fm, total_munite, h, m;
    scanf("%d%d%d%d", &ih, &im, &fh, &fm);
    total_munite = ((fh * 60) + fm) - ((ih * 60) + im);

    if (total_munite <= 0)
    {
        total_munite = total_munite + 24 * 60;
    }
    h = total_munite / 60;
    m = total_munite % 60;
    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", h, m);
}
