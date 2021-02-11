#include <conio.h>
#include <stdio.h>
int A, l, h, key,count;
int binarysearch(int A[], int l, int h, int key)
{
    int mid;
    if (h >= l)                              
    {
      //  count++;
        mid = (h + l) / 2;

    if (A[mid] == key)
        return mid; 
    else if (A[mid] < key)
        return binarysearch(A, mid + 1, h, key);
    else
        return binarysearch(A, l, mid - 1, key);
    }
    else
    {
        return -1;
    }
}
void main()
{
    int  n, key, low, high, index,a[100],i;
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
    index = binarysearch(a, low, high, key);
   if(index!=-1)
    printf("%d",index);
    else
    {
       printf("not found");
    }
    
    
    getch();
}