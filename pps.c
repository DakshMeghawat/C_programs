#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main( )
{
    float a,b,c,d,e;
    printf("Enter num \n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    a=a+b+c+d+e;
    system("cls");
    printf("Sum of above entered number is => %f",a);
}