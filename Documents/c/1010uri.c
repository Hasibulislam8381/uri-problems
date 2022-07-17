#include<stdio.h>
int main(){
    int codeOfProduct1,codeOfProduct2,up1,up2;
    float pp1,pp2,total;
    scanf("%d %d %f", &codeOfProduct1 , &up1 , &pp1);
    scanf("%d %d %f", &codeOfProduct2 , &up2 , &pp2);

    total = (up1*pp1)+(up2*pp2);
    printf("VALOR A PAGAR: R$ %.2f\n",total);
}
