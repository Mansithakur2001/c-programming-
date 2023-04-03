// Write a C program to compare two strings.


// Write a C program to compare two strings.



   
   // Write a C program to compare two strings.


#include<stdio.h>
#include<string.h>

int main()
{
    char a[50],b[50];
    int i;

    printf("Enter first string: ");
    gets(a);
   
    printf("Enter second string: ");
    gets(b);
 
     for(i=0; a[i]!=0 ;i++)
     {
        if(a[i]!=b[i]){
           
                    printf("strings are not same");
            break;
        }else{
            
            printf("string same");
            break;
        }
     }

 

}
   