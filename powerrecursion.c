#include<stdio.h>
#include<conio.h>
 int power(int base, int n)
 {
     if(n!=0)
     {
         return (base*power(base,n-1));
     }
     else
     {
         return 1;
     }
     
 }
void main()
{
    int base,n,result;
    printf("enter the base and n");
    scanf("%d%d",&base,&n);
    result=power(base,n);
    printf("%d",result);
    getch();
}