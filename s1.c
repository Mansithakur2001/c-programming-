// Write a C program to find length of a string.

#include<stdio.h>
#include<string.h>
int main()
{
    int i;
    char str[]="hello world";
    for(i=0; str[i]!='\0'; i++);
        printf("%d",i);
    
    return 0;
}
// -------------------------------------------------------------------------------------------------------------

// #include <stdio.h>
// #include <string.h>
  
// int main()
// {
//     char len[1000];
//     int i;
  
//     printf("Enter the String: ");
//     scanf("%s", len);
  
//     for (i = 0; len[i] != '\0'; ++i);
  
//     printf("Length of Str is %d", i);
  
//     return 0;
// }