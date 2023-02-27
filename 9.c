#include <stdio.h>

int main()
{
    int  ch;
    printf("Enter the value");
    scanf("%c", &ch);
    if(( ch<='a' && ch>='z') && ( ch<='A' && ch>='z')){
     printf("%c is alphabets",ch)   
    }
    if else(ch>='0' && ch<='9'){
        printf("%c is digit",ch);
    }
    else{
        printf("%c is special character", ch);
    }
    return 0;
}