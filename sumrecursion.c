#include<conio.h>
#include<stdio.h>
int sum(int N)
{
    if(N!=0)
    {
        return N+sum(N-1);
    }
    else
    {
        return N;
    }
    
}
void main()
{
    int n,result;
    printf("enter the no");
    scanf("%d",&n);
    result=sum(n);
    printf("%d",result);
    getch();
}