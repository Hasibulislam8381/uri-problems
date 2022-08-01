#include <stdio.h>
int main()
{
    int data, ending;
    scanf("%d", &data);
    ending = data + 11;
    for (int i = data; i <= ending; i++)
    {
        if (i % 2 == 1)
        {
            printf("%d\n", i);
        }
    }
}