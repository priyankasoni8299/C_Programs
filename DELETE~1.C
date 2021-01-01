#include <stdio.h>
#include <conio.h>
#include <string.h>
void main()
{
    int i, j=0;
    char str[25], str1[25];
    printf(" enter the string");
    scanf("%s", &str);
    for (i = 0; i < strlen(str); i++)
    {
	if (str[i] >= 65 && str[i] <= 90 || str[i] >= 97 && str[i] <= 122)
	    str1[j++] = str[i];
    }
    str1[j] = NULL;
    printf("%s", str1);
    getch();
}