#include <stdio.h>
#include <conio.h>
void main()
{
    int sum = 0, n, n1 = 1, i, rem;
    int decnum;
    char hexnum[50];
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
    while(sum!=0)
    {
        rem = sum%16;
        if(rem<10)
            rem = rem+48;
        else
            rem = rem+55;
        hexnum[i] = rem;
        i++;
        sum = sum/16;
    }
    printf("\nEquivalent Value in Hexadecimal = ");
    for(i=i-1; i>=0; i--)
    {
        printf("%c", hexnum[i]);
    }
    getch();
}