#include<math.h>
#include <stdio.h>

int main()
{
    double a, b, c, d, root1, root2, realpart, imagpart;
    printf("Enter the value");
    scanf("%d%d%d",&a, &b, &c);
    d=b*b-4*a*c;
    if(d>0)
    root1=(-b+sqrt(d)) / (2*a);
    root2=(-b-sqrt(d)) / (2*a);
    printf("%lf roots are real amnd different",root1 , root2);
    else (d==0)
    root1=root2=(b*b) / 2a;
    printf("%lf roots are real and different", root1);
    return 0;
}

