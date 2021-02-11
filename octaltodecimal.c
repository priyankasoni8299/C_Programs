#include<stdio.h>
#include<conio.h>
void main()
{
    int n,n1=1,sum=0,rem;
    printf("enter the octal  no");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*n1);
        n=n/10;
        n1=n1*8;
    }
    printf("%d",sum);
    getch();
}