
#include<stdio.h>
int main(){
   double n;
   int a,b,c,d,e,f,g,h,i,j,k,l,m;
   scanf("%lf",&n);
   a = n*100;
   b = a/10000;
   printf("NOTAS:\n%d nota(s) de R$ 100.00\n",b);
   a = a%10000;
   c = a/5000;
   printf("%d nota(s) de R$ 50.00\n",c);
   a = a%5000;
   d = a/2000;
   printf("%d nota(s) de R$ 20.00\n",d);
   a = a%2000;
   e = a/1000;
   printf("%d nota(s) de R$ 10.00\n",e);
   a = a%1000;
   f = a/500;
    printf("%d nota(s) de R$ 5.00\n",f);
    a=a%500;
    g = a/200;
     printf("%d nota(s) de R$ 2.00\n",g);
     a = a%200;
     h = a/100;
      printf("MOEDAS:\n%d moeda(s) de R$ 1.00\n",h);
      a = a%100;
      i = a/50;
       printf("%d moeda(s) de R$ 0.50\n",i);
       a = a%50;
       j = a/25;
       printf("%d moeda(s) de R$ 0.25\n",j);
       a = a%25;
       k = a/10;
       printf("%d moeda(s) de R$ 0.10\n",k);
       a = a%10;
       l = a/5;
       printf("%d moeda(s) de R$ 0.05\n",l);
       a = a%5;
       m = a/1;
       printf("%d moeda(s) de R$ 0.01\n",m);




}
