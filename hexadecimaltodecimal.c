#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int decimal=0,i,len,base=1;
    char hex[20];
    printf("enter the hexadecimal value");
    scanf("%s",hex);
    len=strlen(hex);
    printf("%d",len);
    for(i=len-1;i>=0;i--)
    {
     if(hex[i] >= '0' && hex[i] <= '9')
        {
            decimal += (hex[i] - 48) * base;
            base *= 16;
        }
        else if(hex[i] >= 'A' && hex[i] <= 'F')
        {
            decimal += (hex[i] - 55) * base;
            base *= 16;
        }
        else if(hex[i] >= 'a' && hex[i] <= 'f')
        {
            decimal += (hex[i] - 87) * base;
            base *= 16;
        }
    }
    printf("\nHexadecimal number = %s", hex);
    printf("Decimal number = %d\n", decimal);
     
    
    getch();
}