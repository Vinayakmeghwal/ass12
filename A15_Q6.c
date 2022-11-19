#include<stdio.h>
void factorial();
int main()
{
    factorial();
    return 0;
}
void factorial()
{
    int num,count,fact=1;
    printf("enter whose factorial you want \n");
    scanf("%d",&num);
    for(count = 1 ; count <= num ; count++)
    {
        fact=fact*count;
    }
    printf("factorial of %d is %d\n",num,fact);
}