#include <stdio.h>

int main()
{
  int i;
  printf("The first 10 even natural numbers in reverse are\n");
  
  for(i=10;i>=1;i--)
  {
    printf("%d\n",2*i);
     
  }
  
  return 0;
}