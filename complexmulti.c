#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b,c,d,e,f;
    printf ("enter the first num a and second no b");
    scanf("%d%d",&a,&b);
    printf ("enter the first num  c and second no d");
    scanf("%d%d",&c,&d);
    e=a*c;
    f=b*d;
    printf("%d*%di",e,f);

    getch();
}