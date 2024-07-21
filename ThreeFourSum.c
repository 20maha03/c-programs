#include <stdio.h>

void myStrcpy(char *dest, const char *src)
{
    while (*src)
    {
        *dest++ = *src++;
    }
    *dest = '\0';
}

void myStrcat(char *dest, const char *src)
{
    while (*dest)
    {
        dest++;
    }
    while (*src)
    {
        *dest++ = *src++;
    }
    *dest = '\0';
}

int main()
{
    int n = 10;
    char arr[1000][20];

    myStrcpy(arr[0], "3");
    myStrcpy(arr[1], "4");

    int index = 2;
    for (int i = 0; i < index && index < n; i++)
    {
        myStrcpy(arr[index], arr[i]);
        myStrcat(arr[index], "3");
        index++;

        if (index >= n)
        {
            break;
        }

        myStrcpy(arr[index], arr[i]);
        myStrcat(arr[index], "4");
        index++;
    }

    for (int i = 0; i < n; i++)
    {
        printf("%s\n", arr[i]);
    }

    return 0;
}
