#include <stdio.h>
#include <conio.h>
void main()
{
    int sum = 0, n, n1 = 1, i,rem;
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
    printf("%d\n",sum);
    getch();
}