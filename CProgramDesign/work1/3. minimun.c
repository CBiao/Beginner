#include <stdio.h>

double min(double x, double y)
{
    double m;
    if(x > y)
        m = y;
    else
        m = x;
    return m;
}

int main()
{
    double x, y, TheMinNumber;
    printf("plesae enter two numbers\n");
    scanf("%lf %lf", &x, &y);
    TheMinNumber = min(x,y);
    printf("The minimun is %lf\n",TheMinNumber);
    return 0;
}
