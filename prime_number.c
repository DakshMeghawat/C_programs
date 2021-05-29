#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>  
int main()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n; 
system("cls"); 
while(n>0)    
{    
r=n%10;
printf("value of r %d \n",r);  
sum=(sum*10)+r; 
printf("value of sum %d \n",sum);   
n=n/10;
printf("value of n %d \n",n);    
}    
if(temp==sum)    
printf("palindrome number ");    
else    
printf("not palindrome");   
return 0;  
}   