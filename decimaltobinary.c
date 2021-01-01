#include <stdio.h>
#include <conio.h>
void main()
{
    int n, i = 0;
    int a[20];
    printf("enter the no");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        a[i] = n % 2;

        n = n / 2;
    }
    printf("decimal to binary:-");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    getch();
}