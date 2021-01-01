#include <stdio.h>
static int Fact(int num)
{
    int i = 1;
    while (num != 0)
    {
        i = i * num;
        num--;
    }
    return i;
}
static int nCr(int n, int r)
{
    //System.out.println(n);
    return Fact(n) / (Fact(r) * Fact(n - r));
}

int main()
{
    int n = 6, r = 4;
    printf(nCr(n, r));
    return 0;
}
