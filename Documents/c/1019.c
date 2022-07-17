#include<stdio.h>
int main(){
   int n,h,m,s,mod;
   scanf("%d",&n);
   h = n/3600;
   mod = n%3600;
   m = mod/60;
   s = n%60;
   printf("%d:%d:%d\n",h,m,s);
}
