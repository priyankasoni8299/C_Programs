#include <conio.h>
#include <stdio.h>
#include <math.h>
void main()
{
    int a, i, n, sum, r, an;
    printf("enter the first term of arthimetic progression");
    scanf("%d", &a);
    printf("enter the nth term of arthimetic progression");
    scanf("%d", &n);
    printf("enter the difference");
    scanf("%d", &r);

    an = a * pow(r, (n - 1));
    printf("%d\n",an);
    sum = ((an * r) - a) / (r - 1);
    printf("%d\n",sum);
    /*
    for (i = a; i <= an; i = a * r)
    {
        if (i != an)
        {
            printf("%d +", i);
        }
        else
        {
            printf("%d=%d", i, sum);
        }
        
    }*/
    getch();
    
}
