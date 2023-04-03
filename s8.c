// Write a C program to find total number of alphabets, digits or special character in a string.


#include <stdio.h>
int main()
{
    char str[100];
    int alphabets=0, digits=0, specialCharacters=0;
    printf("Enter any string : ");
    gets(str);
    int i=0;
    while(str[i]!='\0')
    {
        if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
        {
            alphabets++;
        }
        else if(str[i]>='0' && str[i]<='9')
        {
            digits++;
        }
        else
        {
            specialCharacters++;
        }

        i++;
    }

    printf("Alphabets = %d\n", alphabets);
    printf("Digits = %d\n", digits);
    printf("Special characters = %d", specialCharacters);

    return 0;
}