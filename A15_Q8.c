#include<stdio.h>
void arrange();
int main()
{
    arrange();
    return 0;
}
void arrange()
{
    int n,c,fact=1;
    printf("enter whose factorial you want \n");
    scanf("%d",&n);
    for(c = 1 ; c <= n ; c++)
    {
        fact=fact*c;
    }
    printf("factorial of %d is %d\n",n,fact);
    int r;
    printf("enter whose factorial you want \n");
    scanf("%d",&r);
    int a=n-r;
    int b,fact1=1;
    for(b = 1 ; b <= a ; b++)
    {
        fact1=fact1*b;
    }
    printf("factorial of %d is %d\n",a,fact1);
    int d=fact/fact1;
    printf("the permutaions are %d \n",d);
    
}