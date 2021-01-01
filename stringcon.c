#include<stdio.h>
#include<conio.h>
void  main()  
{  
    char str1[20]; 
    char str2[20];  
    int i,j;  
    printf("Enter the first string");  
    scanf("%s",str1);  
    printf("\nEnter the second string");  
    scanf("%s",str2);  
    for(i=0;str1[i]!='\0';i++);   
      
      
    for(j=0;str2[j]!='\0';j++)  
    {  
        
        str1[i]=str2[j];  
        i++;  
    }  
    str1[i]='\0';  
   printf("After concatenation, the string would look like: %s", str1);  
getch();
}