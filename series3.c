#include<conio.h>
#include<stdio.h>
void main()
{
    int i,n,sum=0;
    printf("enter the last value of series");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        
     printf("%d^3 +",i);
        sum=sum+(i*3);
      
    }
    printf("\n toatal sum of series =%d",sum);
   getch();
}