#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    float Area,Base,Height;
    printf("Enter Base and Height => \n");
    scanf("%f%f",&Base,&Height);
    Area=0.5f*Base*Height;
    system("cls");
    printf("Area of Triangle is => %f",Area);
}