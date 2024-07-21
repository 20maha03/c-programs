#include <stdio.h>

void findTopBottom(int row, int col, int rowPosition, int colPosition, int arr[row][col])
{

    int top = 0;
    int bottom = 0;
    int left = 0;
    int right = 0;

    if (rowPosition >= 0 && colPosition >= 0)
    {
        top = arr[rowPosition - 1][colPosition];
        bottom = arr[rowPosition + 1][colPosition];
        left = arr[rowPosition][colPosition + 1];
        right = arr[rowPosition][colPosition - 1];
    }

    if (top >= bottom && top >= left && top >= right)
    {
        arr[rowPosition][colPosition] = top;
    }
    else if (bottom >= top && bottom >= left && bottom >= right)
    {
        arr[rowPosition][colPosition] = bottom;
    }
    else if (left >= top && left >= right && left >= bottom)
    {
        arr[rowPosition][colPosition] = left;
    }
    else
    {
        arr[rowPosition][colPosition] = right;
    }
}
int main()
{
    int row;
    printf("enter row\n");
    scanf("%d", &row);

    int col;
    printf("enter row\n");
    scanf("%d", &col);

    int arr[row][col];

    printf("enter array elements\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    int rowPosition;
    printf("enter row position\n");
    scanf("%d", &rowPosition);

    int colPosition;
    printf("enter col position\n");
    scanf("%d", &colPosition);

    printf("before\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    findTopBottom(row, col, rowPosition, colPosition, arr);

    printf("After\n");
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    return 0;
}