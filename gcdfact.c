#include <stdio.h>
#include <conio.h>
int gcd(int i, int j, int n)
{
    if (i % n == 0 && j % n == 0)
    {
        // printf("hello");
        return n;
    }
    else
    {
        gcd(i, j, --n);
    }
}
void main()
{
    int i, j, n, result;
    printf("enter the two no");
    scanf("%d%d", &i, &j);

    if (i < j)
    {
        n = i;
    }
    else
    {
        n = j;
    }
    result = gcd(i, j, n);
    printf("%d", result);

    getch();
}