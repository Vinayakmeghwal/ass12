#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter value of no. of pair you want to sum : ");  
  scanf("%d",&a);
  
  for(b=0;b<a;b--)
  {
    printf("Enter first value: ");
    scanf("%d",&b);
    printf("Enter second value: ");
    scanf("%d",&c);
    printf("Sum = %d\n",b+c);
         
  }
  
  return 0;
}