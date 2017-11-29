#include <stdio.h>

int main()
{
	int a, e, i ,o, u;
	int j, k;
	char s[1000];
	a = e = i = o = u = 0;
	for(j=0;j<3;j++){
		gets(s);
		for(k=0;s[k]!='\0';k++){
			a += s[k]=='a'?1:0;
			e += s[k]=='e'?1:0;
			i += s[k]=='i'?1:0;
			o += s[k]=='o'?1:0;
			u += s[k]=='u'?1:0;
		}
	}
	printf("a:%d\n", a);
	printf("e:%d\n", e);
	printf("i:%d\n", i);
	printf("o:%d\n", o);
	printf("u:%d\n", u);
	return 0;
}
