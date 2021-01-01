#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    char str[25];
    int i;
    printf("enter the string in lower case");
    scanf("%s", &str);
    for (i = 0; i <= strlen(str); i++)
    {
        if (str[i] >= 97 && str[i] <= 122)
            str[i] = str[i] - 32;
    }
    printf("%s", str);
    getch();
}