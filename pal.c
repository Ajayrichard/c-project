#include<stdio.h>  
void pallindrom()    
{    
int n,r,sum=0,temp;    
printf("enter the number=");    
scanf("%d",&n);    
temp=n;    
while(n>0)    
{    
r=n%10;    
sum=(sum*10)+r;    
n=n/10;    
}    
if(temp==sum)    
printf("\npalindrome number\n ");    
else    
printf("\nnot palindrome\n");   
//pallindromreturn 0;  
}   
