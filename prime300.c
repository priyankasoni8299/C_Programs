#include <stdio.h>
int main()
{
    int i, n,f=0;
    for (i = 2; i <= 300; i++)
    {
              f=0;
        for (n = 2; n <= i / 2; n++)
        {
            if (i % n == 0)
            {
                f = 1;
                break;
            }
        }
        if(f==0)
        printf("%d\n",i);
    }
    return 0;
}