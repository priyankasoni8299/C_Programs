#include<stdio.h>
#include<conio.h>
int fact(int n)
{
int i,f=1;
for(i=1;i<=n;i++)
  f=f*i;
  return f;
}
void main()
{
    int n,r;
    printf("enter the value of n and r");
    scanf("%d%d",&n,&r);
    int c=fact(n)/(fact(r)*fact(n-r));
    printf("%d",c);
        //printf("%d",fact(r));

     getch();

}