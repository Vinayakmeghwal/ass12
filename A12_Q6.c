#include <stdio.h>

int main()
{
    int i,n;

    printf("Enter any number: ");
    scanf("%d", &n);

    printf("Natural numbers from 10 to %d : \n",n);
    for(i=10;i>=n;i--)
    {
        printf("%d\n", i);
        
    }
    printf("End");

    return 0;
}