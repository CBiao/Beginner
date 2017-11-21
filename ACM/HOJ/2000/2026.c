//统计元音
#include <stdio.h>

int main()
{
	int a, e, i, o, u, n, j;
	char s[101];
	while(scanf("%d", &n)==1){
    getchar();
		while(n--){
      a = e = i = o = u = 0;
			gets(s);
			for(j=0;s[j]!='\0';j++){
				if(s[j]=='a')
					a++;
				else if(s[j]=='e')
					e++;
				else if(s[j]=='i')
					i++;
				else if(s[j]=='o')
					o++;
				else if(s[j]=='u')
					u++;
			}
			printf("a:%d\n", a);
			printf("e:%d\n", e);
			printf("i:%d\n", i);
			printf("o:%d\n", o);
			printf("u:%d\n", u);
			if(n)	putchar('\n');
		}
	}
	return 0;
}
