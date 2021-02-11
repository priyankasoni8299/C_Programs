#include<stdio.h>
#include<conio.h>
int A,i,key;
 int binarysearch(int A[],int N,int key)
 {
    
     int low=0,high=N-1;
     while(low<=high)
     {
         int mid=(low+high)/2;
         if(key==A[mid])
         { 
             return mid;
         }
         else if(key<A[mid]){
         high=mid-1;
         }
         else{
         low=mid+1;
         }
 }   
 return -1;
 }
void main()
{
    int a[100], n, key;
    printf("enter the element no in array");
    scanf("%d", &n);
    printf("enter the element  in array");
    for ( i = 0; i <= n - 1; i++)
    {
        scanf("%d", &a[i]);
    }
    printf("enter the key");
    scanf("%d", &key);
    int index=binarysearch(a,n,key);
    if(index!=-1){
        printf("element is found %d",index);
    }else
    {
    printf("element not found ");
   } 
   getch();
    
}
 

    
