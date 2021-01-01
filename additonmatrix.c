#include<stdio.h>
#include<conio.h>
void main()
{
    int r,c, i,j,a[20][20],b[20][20],sum[20][20];
    printf("Enter the number of rows (between 1 and 100): ");
    scanf("%d", &r);
    printf("Enter the number of columns (between 1 and 100): ");
    scanf("%d", &c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter the first matrix");
            scanf("%d",&a[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("enter the second matrix");
            scanf("%d",&b[i][j]);
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            sum[i][j]=a[i][j]+b[i][j];
        }
    }
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d",sum[i][j]);
        }
        printf("\n\n");
    }
    getch();
}