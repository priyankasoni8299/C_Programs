#include<conio.h>
#include<stdio.h>
int sum;
int reverse(int N)
{
    int rem;
    if(N!=0)
    {
        rem=N%10;
        sum=sum*10+rem;
       // printf("%d",sum);
        reverse(N/10);
    }
    else
    {
        return sum;
    }
    
}
void main()
{
    int n,sum;
    printf("enter the no");
    scanf("%d",&n);
    sum=reverse(n);
    printf("%d",sum);
    getch();

}