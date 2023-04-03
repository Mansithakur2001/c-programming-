// Write a C program to count total number of words in a string.

#include <stdio.h>

int main()
{
    int words = 1;
    char str[100];
    printf("Enter any string: ");
    gets(str);

  int i=0;
    while(str[i] != '\0')
    {
        if(str[i]==' ' || str[i]=='\n' || str[i]=='\t')
        {
            words++;
        }

        i++;
    }
    printf("Total number of words = %d", words);
    return 0;
}