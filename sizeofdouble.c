#include <stdio.h>
int main()
{
    double arr[2];
    char *p1, *p2;
    p1 = &arr[0];
    p2 = &arr[1];
    printf("please enter two elements");
    for (int i = 0; i < 2; i++)
    {
        scanf("%d", &arr[i]);
    }
    int c = p2 - p1;
    printf("the size of the data=%d", c);
    if (c == 1)
    {
        printf("\nthe data type is char");
    }
    else if (c == 4)
    {
        printf("\nthe data type is integer");
    }
    else if (c == 8)
    {
        printf("\nthe data type is long");
    }
    else if (c == 2)
    {
        printf("\nthe data type is sort");
    }
    return 0;
}