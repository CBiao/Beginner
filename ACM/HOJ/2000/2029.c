//Palindromes _easy version
#include <stdio.h>

int main()
{
	char a[10000];
	int n, l, i, flag;
	while(scanf("%d", &n)==1){
		getchar();
		while(n--){
			flag = 1;
			gets(a);
			for(l=0;a[l]!='\0';l++);
			for(i=0;i<l/2;i++){
				if(a[i]!=a[l-i-1]){
					flag = 0;
					break;
				}
			}
			if(flag){
				printf("yes\n");
			}
			else{
				printf("no\n");
			}
		}
	}
	return 0;
}
