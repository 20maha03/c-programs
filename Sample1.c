#include <stdio.h>
static int i;
static int i = 2;
static int i;
int add(int a, int b);
int main()
{
    static int i;
    printf("%d", i);
    int number = 123;
    int hundreds = number / 100;
    int tens = number % 100;
    tens /= 10;
    int ones = number % 10;
    int result = add(2, 3);
    printf("h = %d  t = %d  o = %d", hundreds, tens, ones);
}
int add(int a, int b)
{
    static int c;
    static int d;
    return a + b;
}
