#include <stdio.h>
int main()
{
    int n, row, col;
    scanf("%d", &n);

    for (int row = 1; row <= n; row++)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= row; col++)
        {
            printf("*", row);
        }
        printf("\n");
    }

    for (int row = n - 1; row >= 1; row--)
    {
        for (int col = 1; col <= n - row; col++)
        {
            printf(" ");
        }
        for (int col = 1; col <= row; col++)
        {
            printf("*", row);
        }
        printf("\n");
    }

    return 0;
}