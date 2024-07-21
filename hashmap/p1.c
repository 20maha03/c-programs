#include <stdio.h>

void pattern(int n)
{
    int count = 1;
    int row = 0;
    for (int i = 0; i < 2 * n; i++)
    {
        if (i > row)
        {
            row = 2 * n - 1 - i;
        }
        else
        {
            row = i;
        }
        for (int j = 0; j < n; j++)
        {
            if (j >= n / 2 - row)
            {
                printf("%d ", ++count);
            }
            else if (j <= n / 2 + row)
            {
                printf("%d ", --count);
            }
        }
        count++;
        printf("\n");
    }
}

int main()
{

    int number;
    printf("enter number\n");
    scanf("%d", &number);

    pattern(number);
}
