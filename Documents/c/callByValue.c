#include<stdio.h>
int addition(int num1,int num2);
int main()
{
while(1){
    int num1,num2,res;
    printf("Enter Two Number : ");
    scanf("%d%d",&num1,&num2);

    res=addition(num1,num2);
    printf("The Summation is = %d\n",res);

}
}
int addition(int a,int b)
{
    return a+b;
}

