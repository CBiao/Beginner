//首字母变大写
#include <stdio.h>

int main()
{
	char a[101];
	int i;
	while(gets(a)!=NULL){
		a[0]-=32;
		for(i=1;a[i]!='\0';i++){
			if(a[i-1]==' '){
				a[i]-=32;
			}
		}
		puts(a);
	}
	return 0;
}
