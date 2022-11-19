#include<stdio.h>
int prime(int);
int main()
{
    int n,b;
    printf("enter the number\n");
    scanf("%d",&n);
    b=prime(n);
    return 0;
}
int prime(int n)
{
    int i;
    int a=10;
    printf("PRIME FACTORS OF THE NUMBER %d IS\n",n);
    for (i=2;i<(a+n);i++)
    {

        if(n%i==0)
        {
            printf("%d\n",i);
            n=n/i;
        }
        
    }
}
