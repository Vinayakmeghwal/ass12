#include <stdio.h>
void quantity();
int main()
{
  int n,a;
  printf("What do you want to eat from  \n");
  printf("1 for Burger \n2 for French Fries \n3 for Pizza\n4 for Sandwiches \n5 for chaumin");
  scanf("\n%d",&n);
  printf("how much u want ");
  scanf("%d",&a);
  
  switch(n) {
    case 1:{
         printf("%dBurger price is Rs %d",a,200*a);
         break;
    }
    case 2:{
         printf("%d French Fries price is Rs %d",a,50*a);
         break;
     }
    case 3:{
         printf("%d Pizaa price is Rs %d",a,500*a);
         break;
    }
    case 4:{
         printf("%d Sandwichs price is Rs %d",a,150*a);
         break;
    }
    case 5:{
         printf("%d Chaumin price is Rs %d",a,100*a);
         break;
    }
    default:{
         printf("Out of stock");
    }
    }
  return 0;
}