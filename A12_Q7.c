#include <stdio.h>

int main()
{
    int i, n;

    printf("Enter any number: ");
    scanf("%d", &i);

    printf("Natural numbers from %d to 0 : \n",i);
    for (n=0;n<=i;i--)
    {
        printf("%d\n",i);
    }
    printf("End");

    return 0;
}