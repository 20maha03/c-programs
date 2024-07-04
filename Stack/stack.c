#include <stdio.h>

char arr[100];
int top = -1;

void push(char val)
{
    if (top == 100 - 1)
    {
        printf("Stack overflow\n");
        return;
    }
    top++;
    arr[top] = val;
}

char pop()
{
    if (top == -1)
    {
        return '\0';
    }
    char data = arr[top];
    top--;
    return data;
}

int isEmpty()
{
    return top == -1;
}

int main()
{
    
    char input[] = "{([[)}";
    int len = sizeof(input) / sizeof(input[0]) - 1;

    for (int i = 0; i < len; i++)
    {
        char ch = input[i];
        if (ch == '{' || ch == '[' || ch == '(')
        {
            push(ch);
        }
        else
        {
            char last = pop();
            if ((ch == '}' && last != '{') || (ch == ']' && last != '[') || (ch == ')' && last != '('))
            {
                printf("false\n");
                return 0;
            }
        }
    }

    if (isEmpty())
    {
        printf("true\n");
        return 1;
    }
    else
    {
        printf("false\n");
        return 0;
    }
}
