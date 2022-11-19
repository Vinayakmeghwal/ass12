#include<stdio.h>
int oddeven();
int main()
{
    oddeven();
    printf("the number is %d",oddeven);
    return 0;
}
int oddeven()
{
    int a;
    printf("enter a value\n");
    scanf("%d",&a);
    if (a%2==0)
    {
        printf("the number is even\n");
        return 1;
    }
    else
    {
        printf("the number is odd\n");
        return 0;
    }
}