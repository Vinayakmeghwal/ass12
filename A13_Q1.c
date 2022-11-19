#include<stdio.h>
int main()
{
  int n;
  printf("Give a month no. to find its days  ");
  scanf("%d",&n);
 
  switch (n) {
  case 1:
  {
    printf("31 Days");
    break;
  }
   case 2:
  {
    int a;
    printf("Enter value of a as\n1.leapyear\n2.Not a leapyear  \n");
    scanf("%d",&a);
    
    if(a==1){
    printf("29 Days");  
    }
    else{
      printf("28 Days");
    }
    break; 
  }
   case 3:
  {
    printf("31 Days");   
    break;
  }
  case 4:
   {
    printf("30 Days");  
    break; 
  }
   case 5:
  {
    printf("31 Days");  
    break;  
  }
   case 6:
  {
    printf("30 Days");   
    break;
  }
   case 7:
  {
    printf("31 Days");  
    break; 
  }
   case 8:
  {
    printf("31 Days");   
    break;
  }
   case 9:
  {
    printf("30 Days");   
    break;
  }
   case 10:
  {
    printf("31 Days");   
    break;
  }
   case 11:
  {
    printf("30 Days");
    break;   
  }
   case 12: 
  {
    printf("31 Days");  
    break; 
  }
   default:
  {
    printf("Not valid");
    break;
  }
  }
   
   return 0;
}
