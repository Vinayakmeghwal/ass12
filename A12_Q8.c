#include <stdio.h>

int main()
{
  int i=1;
  printf("The first 10 odd natural numbers are: ");
  scanf("%d",&i);
  
  for(i=1;i<=10;i++)
  {
    printf("%d\n",2*i-1);
    
  }
  
  return 0;
}