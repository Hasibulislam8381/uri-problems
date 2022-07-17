#include<stdio.h>
int sum(int *num1,int *num2);
int main()
{
    int num1=12,num2=34,result;

    result=sum(&num1,&num2);
    printf("%d",result);


}

int sum(int *a,int *b)
{
    return *a + *b;
}
