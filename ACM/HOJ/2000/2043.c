//密码
#include <stdio.h>
#include <string.h>
int main()
{
	char s[60];
	int m, i, big, small, num, other;
	scanf("%d", &m);
	while(m--){
		scanf("%s", s);
		if(strlen(s)>=8&&strlen(s)<=16){
			big = small = num = other = 1;
			for(i=0;s[i]!='\0'&&big;i++){
				if(s[i]>='A'&&s[i]<='Z'){
					big = 0;
				}
			}
			for(i=0;s[i]!='\0'&&small;i++){
				if(s[i]>='a'&&s[i]<='z'){
					small = 0;
				}
			}
			for(i=0;s[i]!='\0'&&num;i++){
				if(s[i]>='0'&&s[i]<='9'){
					num = 0;
				}
			}
			for(i=0;s[i]!='\0'&&other;i++){
				if(s[i]=='~'||s[i]=='!'||s[i]=='@'||s[i]=='#'||s[i]=='$'||s[i]=='%'||s[i]=='^'){
					other = 0;
				}
			}
			if(big+small+num+other<=1){
				printf("YES\n");
			}
			else{
				printf("NO\n");
			}
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
