#include<stdio.h>
#include<conio.h>
 int binary(int n ,int sum)
 {
     int rem,n1=1;
     while(n>0)
     {
     rem=n%10;
     if(rem==1)
        sum=sum+n1;
    n=n/10;
    n1=n1*2;
     }
     return sum;
 }
void main()
{
    int n,sum=0;
    printf("\n enter the binary no");
    scanf("%d",&n);
    sum=binary(n,sum);
    printf("decimal=%d",sum);
    getch();

}