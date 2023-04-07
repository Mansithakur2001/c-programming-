#include<stdio.h>
void russia()
{
printf("russia\n");
return;
}

void japan(){
printf("japan\n");
russia();
return;
}

void india(){
printf("india\n");
japan();
return;
}

int main()
{
india();
return 0;
}
    
    