#include<stdio.h>
void odd();
int main()
{
    odd();
    return 0;
}
void odd()
{   
    int i,a;
    printf("enter a value\n");
    scanf("%d",&a);
    for(i=1;1<=100;i++)
    if(a%2==0)
    {
        printf("no need \n");
        break;
    }
    else
    {
        printf("the number is odd %d \n",a);
        a=a+2;
        if (i==100)
        {
        break;
        }
    }
    }
    
