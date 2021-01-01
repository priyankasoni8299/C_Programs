#include <stdio.h>
void displayNumbers(int num[3][3]);
int main()
{
    int num[3][3];
    printf("Enter 4 numbers:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            scanf("%d", &num[i][j]);
        }
    }

    // passing multi-dimensional array to a function
    displayNumbers(num);
    return 0;
}

void displayNumbers(int num[3][3])
{
    printf("Displaying:\n");
    for (int i = 0; i < 3; ++i)
    {
        for (int j = 0; j < 3; ++j)
        {
            printf("%d\n", num[i][j]);
        }
    }
}