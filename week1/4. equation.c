#include <stdio.h>

int main()
{
    double a, b, x;
    printf("Please input a b\n");
    scanf("%lf %lf",&a,&b);
    x = -(b/a);
    printf("ax+b=0 µÄ½âx=%lf\n",x);
    return 0;
}
