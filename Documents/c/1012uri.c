
#include<stdio.h>
int main(){
   double A,B,C,area1,area2,area3,area4,area5;
   scanf("%lf%lf%lf",&A,&B,&C);
   area1 = 0.5*A*C;
   area2 = 3.14159*C*C;
   area3 = 0.5*(A+B)*C;
   area4 = B*B;
   area5 = A*B;
   printf("TRIANGULO: %.3lf\n",area1);
   printf("CIRCULO: %.3lf\n",area2);
   printf("TRAPEZIO: %.3lf\n",area3);
   printf("QUADRADO: %.3lf\n",area4);
   printf("RETANGULO: %.3lf\n",area5);


}
