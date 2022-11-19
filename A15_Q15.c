#include<stdio.h>
int main()
{
    int a,i,x;
    x=2;
    printf("how many prime numbers you want\n");
    scanf("%d",&a);
    while(a)
    {
        for(i=2;i<x;i++)
        
            if(x%i==0)
            break;
                if(i==x)
                
                    printf("the number %d is a prime number\n",x);
                    //break;
                    a--; 
                
                       
            x++;
    }
}
