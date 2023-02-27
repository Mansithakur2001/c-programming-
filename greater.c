#include <stdio.h>

void main()
{
    int a,b;
    printf("enter the value");
    scanf("%d%d",&a,&b);
    if(a>b)
    {
    printf("%d is greater",a);
    }
    else if(b>a)
    { 
    printf("%d is greater",b);
    }
    else{
    printf("both are equal");
    } 
    
}
