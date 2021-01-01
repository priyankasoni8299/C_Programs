#include <stdio.h>
#include<conio.h>
void main()
{
    char str[100];
    int i = 0;
        
    printf(" Please Enter any String: ");
    scanf("%s", str);
        
    while (str[i] != '\0')
    {
        printf("%c \n", str[i]);
        i++;
    }
    getch();
}