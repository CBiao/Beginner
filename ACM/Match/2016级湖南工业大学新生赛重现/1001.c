//压轴题！别做
#include <stdio.h>
int main()
{
    int a, b, c;
    while(scanf("%d%d%d", &a, &b, &c)==3){
        printf("%d\n", (c-b)/a);
    }
    return 0;
}
