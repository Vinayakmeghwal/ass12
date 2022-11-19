#include<stdio.h>
int prime1(int);
int prime2(int);
int main()
{
    int n,m,b,c; 
    
    printf("enter the first number\n");
    scanf("%d",&n);
    // printf("enter the second number\n");
    // scanf("%d",&m);
   
    b=prime1(n);
    c=prime2(m);

    return 0;
}
int prime1(int n)
{
    int i;
    int a=100;
    printf("PRIME FACTORS OF THE NUMBER %d IS\n",n);
    for (i=2;i<(n+a);i++)
    {

        while(n%i==0)
        {
            printf("%d\n",i);
            n=n/i;
        }
        
    }
}
// int prime2(int m)
// {
//     int i;
//     int a=100;
//     printf("PRIME FACTORS OF THE NUMBER %d IS\n",m);
//     for (i=2;i<(m+a);i++)
//     {

//         while(m%i==0)
//         {
//             printf("%d\n",i);
//             m=m/i;
//         }
        
//     }
// }
