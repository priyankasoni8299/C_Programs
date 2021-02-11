#include<stdio.h>
#include<conio.h>
void main()
{
    int n,n1=1,sum=0,rem,a[100],i;
    printf("enter the octal  no");
    scanf("%d",&n);
    while(n>0)
    {
        rem=n%10;
        sum=sum+(rem*n1);
        n=n/10;
        n1=n1*8;
    }
    printf("decima=");
    printf("%d",sum);
   
    for (i = 0; sum > 0; i++)
    {
        a[i] = sum % 2;

        sum = sum / 2;
    }
    printf("decimal to binary:-");
    for (i = i - 1; i >= 0; i--)
    {
        printf("%d", a[i]);
    }
    getch();
}