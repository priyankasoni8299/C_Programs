#include <stdio.h>
#include <conio.h>
void main()
{
    int sum = 0, n, n1 = 1, i, rem;
    printf("enter the no");
    scanf("%d", &n);
    while (n > 0)
    {
        rem = n % 10;
        if (rem == 1)
            sum = sum + n1;
        n = n / 10;
        n1 = n1 * 2;
    }
    /* --------------------*/
    for (i = 0; sum > 0; i++)
    {
        rem = sum % 16;
        if (rem > 0)
        {
            if (rem == 10)
            {
                printf("A");
            }
            else if (rem == 11)
            {
                printf("B");
            }
            else if (rem == 12)
            {
                printf("C");
            }
            else if (rem == 13)
            {
                printf("D");
            }
            else if (rem == 14)
            {
                printf("E");
            }
            else if (rem == 15)
            {
                printf("F");
            }
            else
            {
                printf("%d", rem);
            }
        }
        sum = sum / 16;
    }

    getch();
}
