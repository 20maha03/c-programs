#include <stdio.h>

void p1(int number);
void p2(int number);
void p4(int number);
void p3(int number);
void p5(int number);
void p6(int number);
void p7(int number);
void p8(int number);
void p9(int number);
int main()
{
    int number;

    printf("enter number\n");
    scanf("%d", &number);

    p9(number);
    return 0;
}

void p1(int number)
{
    char a = 'A';
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (i == j)
            {
                printf("%C ", a);
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
        a++;
    }
}

void p2(int number)
{
    int c = number;
    char a = 'A';
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (j == c)
            {
                printf("%c ", a);
            }
            else
            {
                printf("* ");
            }
        }
        printf("/n");
        a++;
        c--;
    }
}

void p3(int number)
{
    int a = number;
    char c = 'A';
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (i == j)
            {
                printf("%c ", c);
            }
            else if (j == a)
            {
                printf("%c ", c);
            }
            else
            {
                printf("* ");
            }
        }
        a--;
        c++;
        printf("\n");
    }
}

void p4(int number)
{
    int a = number;
    char c = 'A';
    for (int i = 1; i <= number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (i == j)
            {
                printf("%c ", c);
            }
            else if (j == a)
            {
                printf("%c ", c);
            }
            else
            {
                printf(" ");
            }
        }
        a--;
        c++;
        printf("\n");
    }
}

void p5(int number)
{
    for (int i = 1; i < 2 * number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (i == 1 || i == number || j == number || j == 1 || i == (2 * number) - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void p6(int number)
{
    for (int i = 1; i < 2 * number; i++)
    {
        for (int j = 1; j <= number; j++)
        {
            if (j == 1 && i == 1 || j == 1 && i == number || j == number && i == number || j == number && i == 1 || i == (2 * number) - 1 && j == 1 || i == (2 * number) - 1 && j == number)
            {
                printf("  ");
            }
            else if (i == 1 || i == number || j == number || j == 1 || i == (2 * number) - 1)
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}
void p7(int number)
{
    int mid = number / 2;
    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            if (i == 0 && j == i || i == 0 && j == number - 1 || i == number - 1 && j == 0 || i == number - 1 && j == number - 1)
            {
                printf("  ");
            }
            else if (j == mid && i == 0 || j == mid && i == number - 1)
            {
                printf("* ");
            }
            else if (((i % 2 == 0) && (j % 2 == 0) && j != mid) || ((i % 2 != 0) && (j % 2 != 0) && j != mid))
            {
                printf("* ");
            }
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }
}

void p8(int number)
{
    int mid = number / 2;
    int m2, m1;

    for (int i = 0; i < number; i++)
    {
        for (int j = 0; j < number; j++)
        {
            if (i <= mid)
            {
                if (j == mid - i || j == mid + i)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
            else
            {
                if (j == i - mid || j == number - 1 - (i - mid))
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
    }
}

void p9(int number)
{
    int mid = number / 2;

    for (int i = 0; i < number; i++)
    {

        for (int j = 0; j < 2 * number - 1; j++)
        {

            if (j == (2 * mid - i) || j == (2 * mid + i) || i == number - 1)
            {
                printf("*  ");
            }
            else
            {
                printf("   ");
            }
        }
        printf("\n");
    }
}
