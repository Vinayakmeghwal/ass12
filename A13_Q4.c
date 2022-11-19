#include <stdio.h>

int main()
{
  int day;
  printf("Enter a day no. ");
  scanf("%d",&day);
  
  switch(day)
  {
   case 1:
      {
        printf("Wishing you wealth and good health,\n have a great day.");
        break;
       }    
       
     case 2:
      {
        printf("Today marks a day of another opportunity for you,\n have a great day ");
        break;
       }    
       
    case 3:
      {
        printf("May you have a great day today,\n sparkle and shine amongst everyone!");
        break;
       }    
       
    case 4:
      {
        printf("Reminder: It's you and you are unique. Have a great day!");
        break;
       }    
    
    case 5:
      {
        printf("Each day is full of opportunities,\nnew things, new dreams and may this day bring something that you always dreamed of,\n have a great day!");
        break;
       }    
      
      case 6:
      {
        printf("Dreams are what keeps us awake and\nthey always step ahead with each coming day,\n have a great day and fulfill your dreams!");
        break;
       }     
       
      case 7:
      {
        printf("You will never have this day again,\n   so make it count");
        break;
       }     
       
       default :
         {
           printf("Invalid");
         }
         
             
      }
             
  return 0;
}