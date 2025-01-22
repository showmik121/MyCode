#include <stdio.h>
#include <stdbool.h>

int main()
{
    FILE *file;
    file = fopen("test.txt", "w");
    if (file == NULL)
    {
        printf("file does not exit\n");
    }
    else
    {
        printf("file open\n");
        fclose(file);
    }

    return 0;
}