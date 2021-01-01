#include <stdio.h>
#include <conio.h>
void main()
{
    int i, j, a[20][20],  r, c, b=0;
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("enter the first matrix");
            scanf("%d", &a[i][j]);
        }
    }
    
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            if (i == j)
            {
                b=b+a[i][j];
                
            }
        }
    }
    printf("%d", b);
    
    
    getch();
}