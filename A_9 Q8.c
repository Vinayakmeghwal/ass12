#include<stdio.h>
int main()
{
 int a,b,c;
printf("enter value  for a : ");
scanf("%d",&a);
printf("enter value for b : ");
scanf("%d",&b);

printf("value of a is %d and value of b is %d \n",a,b);

a=a+b;
b=a-b;
a=a-b;

printf("value of a is %d and value of b is %d",a,b);
return 0;
}
