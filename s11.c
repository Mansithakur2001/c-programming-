// Write a C program to find reverse of a string.

#include<stdio.h>
#include<string.h>

int main()
{
  char str[]="Mansi"   ;
  char str2[50];
  
  for(int i=4;i>=0;i--){
    
      str2[4-i]=str[i];
    

  }
  str2[5]='\0';

     printf("%s",str2);

}
   