#include<stdio.h>

int main()
{
  int a,b;
  printf("Enter a no. to find its factorial: ");
  scanf("%d",&a);
  for(b=1;a>1;a--)
  {
   b=b*a; 
  }
  printf("%d",b);
  return 0;
  }