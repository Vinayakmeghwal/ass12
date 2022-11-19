#include<stdio.h>
void combination();
int main()
{
    combination();
    return 0;
}
void combination()
{
    int n,count,fact=1;
    printf("enter whose factorial you want \n");
    scanf("%d",&n);
    for(count = 1 ; count <= n ; count++)
    {
        fact=fact*count;
    }
    printf("factorial of %d is %d\n",n,fact);

    int r,i,fact1=1;
    printf("enter whose factorial you want \n");
    scanf("%d",&r);
    for(i = 1 ; i <= r ; i++)
    {
        fact1=fact1*i;
    }
    printf("factorial of %d is %d\n",r,fact1);
    int c=n-r;
    int e,fact2=1;

    for(e = 1 ; e <= c ; e++)
    {
        fact2=fact2*e;
    }
    printf("factorial of %d is %d\n",c,fact2);
    float d;
    d=fact/fact1*fact2;
    printf("the combination will be %f",d);
}