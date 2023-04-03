// Write a C program to convert uppercase string to lowercase.


#include <stdio.h>


int main()
{
    char str[100];
    int i;
 
    
    printf("Enter any string: ");
    gets(str);


  
    for(i=0; str[i]!='\0'; i++)
    {
        if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }
    }

    printf("Lower case string: %s", str);

    return 0;
}