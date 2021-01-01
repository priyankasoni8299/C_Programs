#include <conio.h>
#include <stdio.h>
#include <string.h>
void main()
{
    int i;
    char str[25];
    printf("enter the string");
    gets(str);
    printf("%c", str[0]);
    for (i = 1; i < strlen(str); i++)
    {
        if (str[i] == ' ')
        {

            i++;
        printf("%c", str[i]);
        }
    }

    getch();
}
