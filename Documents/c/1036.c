#include<stdio.h>
#include<math.h>

int main(){

   double a,b,c,d,x,y;
   scanf("%lf%lf%lf",&a,&b,&c);
    d = b*b - 4*a*c;
   if(a == 0 || d<0){
        printf("Impossivel calcular\n");
   }
   else{
      x = (-b + sqrt(d))/(2*a);
      y = (-b - sqrt(d))/(2*a);
      printf("R1 = %.5lf\nR2 = %.5lf\n",x,y);
   }
}
