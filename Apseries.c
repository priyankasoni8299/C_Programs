  #include <conio.h>
#include <stdio.h>
void main()
{
    int first, i, n, sum, d, last;
    printf("enter the first term of arthimetic progression");
    scanf("%d", &first);
    printf("enter the nth term of arthimetic progression");
    scanf("%d", &n);
    printf("enter the difference");
    scanf("%d", &d);

    last = first + (n - 1) * d;
    sum = (n * (first + last)) / 2;
    for (i = first; i <= last; i = i + d)
    {

        if (i != last)
        {
            printf("%d +", i);
        }
        else
        {
            printf("%d=%d", i, sum);
        }
    }
    getch();
}