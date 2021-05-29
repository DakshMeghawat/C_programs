#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main( )
{
    int area,length,breadth;
    printf("Enter length and breadth of the rectangle => \n");
    scanf("%d%d",&length,&breadth);
    area=length*breadth;
    system("cls");
    printf("Area of the rectangle is => %d ",area);
    return 0;
}