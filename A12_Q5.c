#include <stdio.h>
int main()
{
    int i,n; 
   
    printf("Enter any number  ");
    scanf("%d", &i);
    for(n=0;i>10;i=0)
    {
      n=i-i%10;
      printf("the no. is %d \n",n);
        
    }
    printf("End");

    return 0;
}