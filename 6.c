#include <stdio.h>

int main()
{
    int a;
    printf("Enter the value");
    scanf("%d",&a);
    if (a%4==0)
    {
        printf("%d is leap year",a);
    }
    else
    {
        printf("%d is  not a leap year",a);
    }
    return 0;
}

