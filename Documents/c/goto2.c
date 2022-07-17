
//summation of 1+2+3+4+5.......n

#include<stdio.h>
int main()
{

    int i=1,sum=0,n;
    printf("Enter the value of n:");
    scanf("%d",&n);


    himel:
    sum=sum+i;
    i++;

    if(i<=n)
    {
        goto himel;
    }
    printf("The Summation is =%d",sum);



}
