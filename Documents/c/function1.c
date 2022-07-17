#include<stdio.h>
int main()
{
    int num1,num2,result;
    scanf("%d%d",&num1,&num2);

    result=max(num1,num2);
    printf("THe maximum Value is %d",result);
}
int max(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
