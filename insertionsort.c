#include<stdio.h>
#include<conio.h>
void main()
{
    int a[100],i,temp,n;
    printf("enter the no ");
    scanf("%d",&n);
    for(i=0;i<=n-1;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("the given unsorted array is:");
    for(i=0;i<=n-1;i++)
    {
        
        printf("%d\n",a[i]);
    }
   for(i=1;i<=n-1;i++)
    {
        while(i>0&&a[i-1]>a[i])
        {
            temp=a[i];
            a[i]=a[i-1];
            a[i-1]=temp;
            i--;
        }
    }
     printf("Sorted list in ascending order:\n");
    for (i = 0; i <= n - 1; i++)
    {
        printf("%d\n", a[i]);
    }
    
    getch();
}