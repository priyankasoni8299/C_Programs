#include <stdio.h>
#include <conio.h>
void main()
{
    int a[20], i, key, n,count=0;
    printf("\n enter the element no in array");
    scanf("%d", &n);
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the key");
    scanf("%d", &key);
    for (i = 0; i <= n - 1; i++)
    {
        if (a[i] == key)
        {
            count=1;
        printf("element found %d", i);
            break;
        }
        
    }
    if (count==0)
            printf("element not found");
        
    getch();
}