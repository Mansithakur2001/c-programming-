#include<stdio.h>
int main()
{
    int a;
    printf("Enter the value");
    scanf("%d",&a);
    if (a%5==0 && a%11==0)
    {
        printf("%d is divisible ny 5 and 11",a);
    }
    else
    {
        printf("%d is not divisible by 5 and 11",a);
    }
    
    return 0;
}