#include <stdio.h>
#include <conio.h>
void main()
{
    int a[20][20], t[20][20], r, c,i,j;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter the  matrix");
            scanf("%d", &a[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            t[i][j] = a[j][i];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", t[i][j]);
        }
        printf("\n");
    }
    getch();
}