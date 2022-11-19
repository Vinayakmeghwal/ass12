#include<stdio.h>
int main()
{
  int n,i;
  printf("How many times you want to print Hello World:");
   
  scanf("%d",&n);
   
  for(i=0;i<n; i++)
  { 
    printf("Hello World\n");
    
  }
  printf("End");
  return 0;
   
}