#include <stdio.h>
#include <conio.h>
#include<string.h>
void main()
{
    char a[10], b[10], c;
    int i,l1,l2,len;
    printf("\n enter the first string ");
    gets(a);
    printf("\n enter the second string");
    gets(b);
    puts(a);
    puts(b);
    l1=strlen(a);
    l2=strlen(b);
     len=(l1>l2)?l1:l2;   
     
      /*for (i = 0; a[i] != '\0'; i++)
    {
        c[i] = a[i];
    }
    c[i]='\0';
    for (i = 0; b[i] != '\0'; i++)
    {
        a[i] = b[i];
    }
    a[i] = '\0';

    for (i = 0; c[i] != '\0'; i++)
    {
        b[i] = c[i];
    }

    b[i] = NULL;
*/
    for(i=0;i<len;i++)
    {
        c=a[i];
        a[i]=b[i];
        b[i]=c;
    }
   a[i]='\0';
   b[i]='\0';
    printf("\n after swapping");
    puts(a);
    puts(b);
    getch();
}