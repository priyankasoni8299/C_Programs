#include <stdio.h>
#include <conio.h>
void main()
{
    int i, n, rem, a[20],j;
    printf("enter the no");
    scanf("%d", &n);
    for (i = 0; n > 0; i++)
    {
        rem = n % 16;
        if (rem > 0)
        {
            for (j = 0; n > 0; j++)
            {
                if (rem == 10)
                {
                    a[j] = 'A';
                }
                else if (rem == 11)
                {
                    a[j] = 'B';
                }
                else if (rem == 12)
                {
                    a[j] = 'C';
                    
                }
                else if (rem == 13)
                {
                    a[j] = 'D';
                }
                else if (rem == 14)
                {
                    a[j] = 'E';
                }
                else if (rem == 15)
                {
                    a[j] = 'F';
                }
                else
                {
                    a[j] = rem;
                }
            }
        }
        n = n / 16;
    }
    for (j = j - 1; j > 0; j--)
    {
        printf("%d", a[j]);
    }
    getch();
}