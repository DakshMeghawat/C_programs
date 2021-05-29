#include<stdlib.h>
#include<stdio.h>
#include<conio.h>
int main()
{
    int a,b,c,i;
    i=0;
    printf("Enter starting 2 number of fibonaci series \n");
    scanf("%d%d",&a,&b);
    printf("Number => %d%d",a,b);
    system("cls");
    printf("your Fibonacciseries is \n");
    printf("%d , %d",a,b);
    while(i<1)
    {
        c=a+b;
        a=b;
        b=c;
        i++;
        printf(" , %d",c);
    }
}