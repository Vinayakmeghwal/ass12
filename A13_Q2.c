#include <stdio.h>

int main()
{
  int a,x,y;
  
  printf("Enter fieat value ");
  scanf("%d",&x);
  printf("Enter second value ");
  scanf("%d",&y);
  printf("If the value a \n");
  printf("1 for addition \n2 for subtraction\n3 for multiplication\n4 for division");
  printf("\nEnter value of a ");
  scanf("%d",&a); 
  
  
  switch(a)
  {
   case 1:
      {
        printf("the addition of two no.s is %d",x+y);
        break;
       }    
       
     case 2:
      {
        printf("the difference between two no.s is %d",x-y);
        break;
       }
     case 3:
        {
        printf("the multiplication of two no.s is %d",x*y);
        break;
       }    
     case 4:
       {
        printf("the division of two no.s is %d",x/y);
        break;
       } 
      case 5:
        {
          printf("End");
          break;
        }   
     default : {
       printf("End");
     }  
    
   }      
             
  return 0;
}