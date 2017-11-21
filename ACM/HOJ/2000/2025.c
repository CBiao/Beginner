//查找最大元素
#include <stdio.h>

int main()
{
	char a[101];
	int i;
	char max;
	while(scanf("%s", a)!=EOF){
		char max = a[0];
		for(i=1;a[i]!='\0';i++){
			max = max>a[i]?max:a[i];
		}
		for(i=0;a[i]!='\0';i++){
			printf("%c", a[i]);
			if(a[i]==max){
				printf("%s", "(max)");
			}
		}
		putchar('\n');
	}
	return 0;
}
