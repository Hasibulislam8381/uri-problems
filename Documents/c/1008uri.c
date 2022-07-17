#include<stdio.h>
int main(){
   int workers,working_hour;
   float amount_per_hour,salary;
   scanf("%d%d%f",&workers,&working_hour,&amount_per_hour);
   salary = working_hour*amount_per_hour;
   printf("NUMBER = %d\n",workers);
   printf("SALARY = U$ %.2f\n",salary);
}

