#include<stdio.h>
void loop();
int main()
{
    loop();
    return 0;
}
void loop()
{
    int i,a;
    printf("enter a number \n");
    scanf("%d",&a);
    for (i=1;1<=10;i++)
    {
        printf("the natural numbers are %d \n",i);
        if(i==100)
        {
            break;
        }
    }
}