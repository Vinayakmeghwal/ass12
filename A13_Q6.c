#include <stdio.h>

int main()
{
  int n;
  printf("Enter some key from 1 to 3 ");
  scanf("%d",&n);
  
  switch (n)
  {
    case 1: printf("good");
            break;
  
    case 2: printf("better");
            break;
    case 3: printf("best");
            break;
   default: printf("invalid");
  }                     
  return 0;
}