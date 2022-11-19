#include<stdio.h>
void circle();
int main()
{
    circle();
    return 0;
}
void circle()
{
    int r,area;
    printf("enter radius\n");
    scanf("%d",&r);
    area=3*r*r;
    printf("the area is %d\n",area);
}