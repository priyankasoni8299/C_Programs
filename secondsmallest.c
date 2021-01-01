#include <conio.h>
#include <conio.h>
void main()
{
    int smallest, secondsmallest, i, n;
    int str[25];
    printf("enter the array size");
    scanf("%d", &n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &str[i]);
    }
    if (str[0] < str[1])
    {
        smallest = str[0];
        secondsmallest = str[1];
    }
    else
    {
        smallest = str[1];
        secondsmallest = str[0];
    }
    for (i = 2; i < n; i++)
    {
        if (str[i] < smallest)
        {
            secondsmallest = smallest;
            smallest = str[i];
        }
        else if (str[i] < secondsmallest)
        {
            secondsmallest = str[i];
        }
    }
    printf(" \nSecond smallest element is %d", secondsmallest);
    getch();
}