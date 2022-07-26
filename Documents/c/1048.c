// 0 - 400.00
// 400.01 - 800.00
// 800.01 - 1200.00
// 1200.01 - 2000.00
// Above 2000.00

// 15%
// 12%
// 10%
// 7%
// 4%
// Novo salario: 460.00
// Reajuste ganho: 60.00
// Em percentual: 15 %
#include <stdio.h>
int main()
{
    float salary, bonus;
    char c = '%';
    scanf("%f", &salary);
    if (salary >= 0.00 && salary <= 400.00)
    {
        bonus = salary * .15;
        salary += bonus;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", bonus);
        printf("Em percentual: 15 %c\n", c);
    }
    else if (salary >= 400.01 && salary <= 800.00)
    {
        bonus = salary * .12;
        salary += bonus;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", bonus);
        printf("Em percentual: 12 %c\n", c);
    }
    else if (salary >= 800.01 && salary <= 1200.00)
    {
        bonus = salary * .10;
        salary += bonus;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", bonus);
        printf("Em percentual: 10 %c\n", c);
    }
    else if (salary >= 1200.01 && salary <= 2000.00)
    {
        bonus = salary * .07;
        salary += bonus;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", bonus);
        printf("Em percentual: 7 %c\n", c);
    }
    else if (salary > 2000.00)
    {
        bonus = salary * .04;
        salary += bonus;
        printf("Novo salario: %.2f\n", salary);
        printf("Reajuste ganho: %.2f\n", bonus);
        printf("Em percentual: 4 %c\n", c);
    }
}