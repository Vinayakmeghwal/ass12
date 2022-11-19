#include<stdio.h>
int digit();
int main()
{
    int a,b;
    printf("enter the values\n");
    scanf("%d %d",&a,&b);
    digit(a,b);
    //printf("the digit is present %d",digit);
    return 0;
}
int digit(a,b)
{
    int c,d;
    printf("enter a value\n");
    scanf("%d",&c);
    d=c%10;
    if(d==a||d==b)
    {
        printf("1");
    }
    else
    {
        printf("0");
    }

}