#include <stdio.h>
int main(){
    char c;
    int lowercase_vowel , uppercase_vowel;
    printf("enter the alphabet: ");
    scanf("%c", &c);
    
    lowercase_vowel = (c == 'a' ||  c == 'e' || c == 'i' || c =='o' || c == 'u');
    uppercase_vowel = (C == 'A' || C == 'E' || C == 'I'|| C=='O' || C =='U');
    
    if(lowercase_vowel || uppercase_vowel)
        printf("%c is a vowel" , c);
    else
        printf("%c is a consonent" , c);
    return 0;
}