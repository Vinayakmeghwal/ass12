#include<stdio.h>
void inter();
int main()
{
    inter();
    return 0;
}
void inter()
{
    int A,p,r,t;
    printf("enter the principle ammount\n");
    scanf("%d",&p);
    printf("enter the rate of intrest\n");
    scanf("%d",&r);
    printf("enter the time in years\n");
    scanf("%d",&t);
    A=p*((1+r)*t);
    printf("the simple intrest will be %d",A);
}