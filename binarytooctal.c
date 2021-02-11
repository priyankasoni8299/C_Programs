

#include <stdio.h>
#include <conio.h>
void main()
{
    int sum = 0, n, n1 = 1, i, rem,a[100];
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
  //  printf("%d\n", sum);
    for (i = 0; sum > 0; i++)
    {
        a[i] = sum % 8;
        sum = sum / 8;
    }
    // printf("hello");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    getch();
}