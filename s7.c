// Write a C program to toggle case of each character of a string.

#include <stdio.h>

int main()
{
    char str[100];
    printf("Enter any string: ");
    gets(str);

    int i = 0;
    while(str[i] != '\0')
    {
        if(str[i]>='a' && str[i]<='z')
        {
            str[i] = str[i] - 32;
            
        }
        else if(str[i]>='A' && str[i]<='Z')
        {
            str[i] = str[i] + 32;
        }

        i++;
    }
    printf("After toggle case : %s",str);
    }