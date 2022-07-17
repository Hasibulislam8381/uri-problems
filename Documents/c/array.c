#include<stdio.h>
int main()
{

    int a[5],sum=0;
    int i;
    printf("Enter All number:\n");
    for(i=0;i<5;i++)
    {
        scanf("%d",&a[i]);
    }
   for(i=0;i<5;i++)
    {
        sum=sum+a[i];
    }


printf("%d",sum);

}
