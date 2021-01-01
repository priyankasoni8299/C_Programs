#include <conio.h>
#include <stdio.h>
#include <math.h>
int p(int n,int p)
{
    int i=1,s=n;
    for(;i<p;i++)
    {
       s=s*n;
    }
    return s;
}
void main()
{
    int j,a, i, n, sum, r, an;
    printf("enter the first term of arthimetic progression");
    scanf("%d", &a);
    printf("enter the nth term of arthimetic progression");
    scanf("%d", &n);
    printf("enter the difference");
    scanf("%d", &r);

    an = a * pow(r, (n - 1));
    printf("%d\n",an);
    sum = ((an * r) - a) / (r - 1);
    
    j=1;
    
    for (i = 1; i <= n; i++)
    {
        if (i <a)
        {
            printf("%d +", a);
        }
        else
        {
         
            printf("%d ", a*p(r,j));
            j++;
            
            printf("%s",n==i?"=":"+");
        }   
         
       printf("%d\n",sum);
    getch();
         
    }