#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main( )
{
    float a,b,c,d,e;
    float G;
    printf("Enter 5 Numbers => \n");
    scanf("%f%f%f%f%f",&a,&b,&c,&d,&e);
    system("cls");
    G=(a+b+c+d+e)/5L;
    printf("Average of five Number is => %f",G);
    return 0;
}