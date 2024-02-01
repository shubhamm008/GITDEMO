#include<stdio.h>
void main()
{
    int a;
    printf("enter the number:");
    scanf("%d",&a);
    if(a>0)
    {
        printf("%d",a);
    }
    if(a<0)
    {
        a=-1*a;
        printf("%d",a);
    }
}