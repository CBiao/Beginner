#include <stdio.h>

int main()
{
	int a, b, c;
	while(scanf("%d %d %d", &a, &b, &c)==3){
        if(a+b>c&&a+c>b&&b+c>a){
            if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a){
                printf("yes\n");
            }
            else{
                printf("no\n");
            }
        }
        else{
            printf("not a triangle\n");
        }
	}
	return 0;
}
