//母牛的故事
#include <stdio.h>

int main()
{
	int n,i;
	int cow, cow1, cow2, cow3;
	while(scanf("%d", &n)==1&&n>0&&n<55){
		cow = 1;
		cow1 = cow2 = cow3 = 0;
		for(i=1;i<n;i++){
			cow += cow3;
			cow3 = cow2;
			cow2 = cow1;
			cow1 = cow;
		}
		printf("%d\n", cow+cow1+cow2+cow3);
	}
	return 0;
}
