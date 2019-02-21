#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c,d,e,f,g;
    printf("enter the value of a,b,c,d,e,f");
    scanf("%d%d%d%d%d%d",&a,&b,&c,&d,&e,&f);
    a <= 100;
    b <= 100;
    c <= 100;
    d <= 100;
    e <= 100;
    f <= 100;
    if (a >= 35)
    {
        printf("student is passed");
    }
    else
    {
        printf("student is not passed");
    }
    if (b >= 35)
    {
        printf("student is passed");
    }
    else
    {
        printf("student is not passed");
    }
    if (c >= 35)
    {
        printf("student is passed");
    }
    else
    {
        printf("student is not passed");
    }
    if (d >= 35)
    {
        printf("student is passed");
    }
    else
    {
        printf("student is not passed");
    }
    if (e >= 35)
    {
        printf("student is passed");
    }
    else
    {
        printf("student is not passed");
    }
    if (f >= 35)
    {
        printf("student is passed");
    }
    else
    {
        printf("student is mot passed");
    }
    g = a+b+c+d+e+f/6;
    if (g >= 35)
    {
        printf("student is passed");
    }
    else
    {
        printf("student is not passed");
    }

     return 0;
}
