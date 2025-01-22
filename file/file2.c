#include <stdio.h>
#include <string.h>
// #include<conio.h>
int main()
{
    FILE *file;
    char name[20];
    int age = 0;
    // for (int i = 0; i < 7; i++)
    // {
    //     scanf("%c", &name[i]);
    // }
    // gets(name);
    int len = strlen(name);
    file = fopen("test.txt", "w");
    if (file == NULL)
    {
        printf("file does not exit\n");
    }
    else
    {
        printf("file open\n");
        gets(name);
        scanf("%d", &age);
        // for (int i = 0; i < len; i++)
        // {
        //     fputc(name[i], file);
        // }
        // fputs(name, file);
        fprintf(file,"%s %d\n",name,age);
        fclose(file);
    }

    getchar();
}