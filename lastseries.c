#include<conio.h>
#include<stdio.h>
void main()
{
    int i, k = 1, n;
    printf("\nEnter number of terms:");
    scanf("%d", &n);
    for (i = 1; i <= n; i++)
    {
        printf("%d", k);
        k = k * 2;
        getch();
    }
}