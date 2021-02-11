#include<stdio.h>
#include<conio.h>
void main()
{
    int n,a[100],i;
    printf("enter the decimal no");
    scanf("%d",&n);
   for (i=0;n>0;i++)
    {
        a[i]=n%8;
        n=n/8;
    }
   // printf("hello");
     for (i=i-1;i>=0;i--)
    {
       printf("%d",a[i]);
    }
getch();
}