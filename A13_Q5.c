#include<stdio.h>
int main()
{
  int n;
  printf("Enter what do you want find\n");
  printf("Press\n1 for finding it's sides of an isosceles triangle or not");
  printf("\n2 for finding it's sides of right angled triangle or not");
  printf("\n3 for finding it's sides of equilateral triangle or not");
  printf("\n4 for Exit");
  scanf("%d",&n);
  
     switch(n)
     {
       case 1:
         {
           int x,y,z;
           printf("Enter first length ");
           scanf("%d",&x);
           printf("Enter second length ");
           scanf("%d",&y);
           printf("Enter third length ");
           scanf("%d",&z);
           if ((x==y)&&(x==z)&&(y==z))
           {
            printf("It is an isosceles triangle");
        
            }
           else 
           {
             printf("It is not an isosceles triangle");
            }
            break;
          }
  
      case 2:
       {
           int x,y,z;
           printf("Enter first length ");
           scanf("%d",&x);
           printf("Enter second length ");
           scanf("%d",&y);
           printf("Enter third length ");
           scanf("%d",&z);
 
           if((x*x)+(y*y)==(z*z) && (x*x)+(z*z)==(y*y) && (y*y)+(z*z)==(x*x) )
           {  
              printf("It is a right angle triangle\n");  
            }
           else
           { 
              printf("It is not a right angle triangle\n"); 
            }
             break;
        }
       
         case 3:
         {
           int x,y,z;
           printf("Enter first length ");
           scanf("%d",&x);
           printf("Enter second length ");
           scanf("%d",&y);
           printf("Enter third length ");
           scanf("%d",&z);
           if ((x==y)&&(y==z))
           {
            printf("It is an equilateral triangle");
        
            }
           else 
           {
             printf("It is not an equilateral triangle");
            }
            break;
          } 
       case 4: printf("EXIT");
               break;
       default:printf("Invalid");
      }
  return 0;
}