#include <conio.h>
#include <stdio.h>
void main()
{
    int a[100], i, n, low, high, key, mid;
    printf("enter the element no in array");
    scanf("%d", &n);
    printf("enter the element  in array");
    for (i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
        }

    printf("enter the key");
    scanf("%d", &key);
    low = 0;
    high = n - 1;
    mid = (low + high) / 2;
    while (low <= high)

    {
        if (a[mid] < key)
             low = mid + 1;
        else if (a[mid] == key)
        {
            printf("%delemnet in the index%d", key, mid + 1);
            break;
        }
        else
            high = mid - 1;
        mid = (low + high) / 2;
    }
    if (low > high)
        printf("Not found! %d isn't present in the list.n", key);
    getch();
}