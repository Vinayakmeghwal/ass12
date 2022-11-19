#include<stdio.h>
int main()
{
    int a,b,n,c,d;
    n=10;
    printf("enter a value\n");
    scanf("%d",&a);
    for(b=2;b<(n-1);b++)
    {          
        if (a%b==0)
        {
            printf("the number is not a prime number\n");
            break;
        }
        else
        {
            printf("the number is prime number\n");
            break;
        }
        
    }
}