#include<stdio.h>
#include<conio.h>
void main()
{
    int i=0;
    char str[25];
    printf("enter the string");
    scanf("%s",&str);
    while(str[i]!='\0')
    {
        i++;
    }
    printf("%d",i);
    getch();
}