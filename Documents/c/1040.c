#include<stdio.h>
int main(){
  float a,b,c,d,avg,fail;
  scanf("%f%f%f%f",&a,&b,&c,&d);
  a = a*2;
  b = b*3;
  c = c*4;
  d = d*1;
  avg = (a+b+c+d)/10;
  printf("Media: %.1f\n",avg);


  if(avg>=7){
    printf("Aluno aprovado.\n");
  }
  else if(avg<5){
    printf("Aluno reprovado.\n");
  }
  else if(avg>=5 && avg<7){
    printf("Aluno em exame.\n");
    scanf("%f",&fail);
    printf("Nota do exame: %.1f\n",fail);
    avg =( avg+fail)/2;
    if(avg>=5){
        printf("Aluno aprovado.\n");
    }
    else{
        printf("Aluno reprovado.\n");

    }
    printf("Media final: %.1f\n",avg);

  }

  }
