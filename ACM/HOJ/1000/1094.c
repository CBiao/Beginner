//A+B for Input-Output Practice (VI)
//1092代码水过
#include <stdio.h>

int main()	//much better
{
	int num, sum, n;
	while(scanf("%d",&n)!=EOF&&n){
        sum = 0;
		while(n){
			scanf("%d", &num);
			sum+=num;
			n--;
		}
		printf("%d\n", sum);
	}
	return 0;
}
