#include <stdio.h>
#include <conio.h>
int main()
{
    int i, max1, max2, n;
    int str[25];
    printf("enter the array size");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &str[i]);
    }
    max1 = max2 = str[0];
    for (i = 0; i < n; i++)
    {
        if (str[i] > max1)
        {
            max2 = max1;
            max1 = str[i];
        }
        if (str[i] > max2 && str[i] < max1)
            max2 = str[i];
    }
    printf("%d", max2);
    getch();
    return 0;
}