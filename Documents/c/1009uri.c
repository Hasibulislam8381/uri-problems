#include<stdio.h>
int main(){

  char name[20];
  double salary,total_value_sold,total;
  scanf("%s",&name);
  scanf("%lf%lf",&salary,&total_value_sold);
  total = salary+(total_value_sold*0.15);
  printf("TOTAL = R$ %.2lf\n",total);
}
