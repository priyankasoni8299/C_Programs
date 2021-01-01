#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int i;
    char str[25];
    printf("/n enter the string");
    scanf("%s", &str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122 )
        printf("%c", str[i]);
    }
    
    getch();
}