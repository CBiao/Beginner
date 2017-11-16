#include <stdio.h>
#define PI 3.14159

int main()
{
    double r, h, v;
    printf("Please input the radius and the height\n");
    scanf("%lf %lf",&r,&h);
    v = PI*r*r*h;
    printf("The volume is %lf\n",v); 
    return 0;
}
