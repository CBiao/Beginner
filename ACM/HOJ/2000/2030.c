//汉字统计
#include <stdio.h>

int main()
{
	int n, i, sum;
	char a[10000];
	scanf("%d", &n);
	getchar();
	while(n--){
		sum = 0;
		gets(a);
		for(i=0;a[i]!='\0';i++){
			if(a[i]<0||a[i]>127){
				sum++;
			}
		}
		printf("%d\n", sum/2);
	}
	return 0;
}
