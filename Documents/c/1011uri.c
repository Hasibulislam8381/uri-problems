#include<stdio.h>
int main(){
   double r,pi = 3.14159,area;
   scanf("%lf",&r);
   area = (4/3.0)*pi*(r*r*r);
   printf("VOLUME = %.3lf",area);
}
