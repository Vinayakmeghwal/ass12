#include<stdio.h>
int main()
{
   int year,n;

   printf("Enter Year: ");
   scanf("%d",&year);

   n=((year%4==0)&&((year%400==0)||(year%100!=0)));

   switch(n)
   {

   case 0:
     printf("Not Leap Year");
     break;

   case 1:
     printf("Leap Year");
     break;

   default:
     printf("Invalid");
     break;

   }

   return 0;
}