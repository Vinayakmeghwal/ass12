#include <stdio.h>
int main()
{
  int n;
  printf("What do you want to do\n");
  printf("Enter \n1. Positive no. to Negative no. \n2. Negative no. to Positive no.");
  scanf("%d",&n);
  
  switch(n)
  {
    case 1:
      {  int a,b;
         printf("Enter a Positive no.:");
         scanf("%d",&a);
         b=a*-1;
         printf("Your no. is %d",b);
         break;
       }
     case 2:
       {int a,b;
         printf("Enter a Negative no.:");
         scanf("%d",&a);
         b=a*-1;
         printf("Your no. is %d",b);
         break;
        }
      default: printf("Invalid");
    }
  
  return 0;
}