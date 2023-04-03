// #include<stdio.h>
// #include<string.h>
// int main()
// {
//     char str1[60] , str2[60];
//     int i;
//     printf("enter the string=");
//     scanf("%s",&str1);
//     for(i=0; str1[i]!='\0';i++){
        
//         str2[i]=str1[i];
//         // str2[i]='\0';
//         }
//          printf("first string= %s\n",str1);
//          printf("second string =%s\n",str2);
//         printf("total characters copied=%d",i);

// }
// -----------------------------------------------------------------------------------------------------------------------------------------
#include <stdio.h>
int main()
{
    char str1[50];
    char str2[50];
    int i;
    printf("Enter any string: ");
    gets(str1);
    for(i=0; str1[i]!='\0'; i++)
    {
        str2[i] = str1[i];
    }
    str2[i] = '\0';

    printf("First string = %s\n", str1);
    printf("Second string = %s\n", str2);
   

    return 0;
}