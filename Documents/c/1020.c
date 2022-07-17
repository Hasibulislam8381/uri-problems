#include<stdio.h>
int main()
{

    int days,y,mod,m,day;
    scanf("%d",&days);
    y = days/365;
    mod = days%365;
    m = mod/30;
    day = mod%30;

    printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n",y,m,day);
}
