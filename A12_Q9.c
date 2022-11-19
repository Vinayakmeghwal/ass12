#include <stdio.h>

int main()
{
  int i=10;
  printf("The first 10 odd natural numbers in reverse are:%d \n",i);
  
  
  for(i=10;i>=1;i--)
  {
    printf("%d\n",2*i-1);   
    
  }
  
  return 0;
}