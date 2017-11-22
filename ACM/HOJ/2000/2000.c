//ASCII码排序

#include <stdio.h>

int main()
{
	char a, b, c, x, y, z;
	while(scanf("%c%c%c", &a, &b, &c)==3){
		x = a>b?a:b;
		x = x>c?x:c;
		z = a<b?a:b;
		z = z<c?z:c;
		y = a+b+c-x-z;
		printf("%c %c %c\n", z, y, x);
		getchar();
	}
	return 0;
}





/*自己写的垃圾代码 错在哪里都看不出来
#include <stdio.h>

int main()
{
	char a, b, c;
	while (scanf("%c%c%c", &a, &b, &c)==3) {
		if(b>a) {
			if(c>b) printf("%c %c %c\n", a, b, c);
			else if(a>c) printf("%c %c %c\n", c, a, b);
			else printf("%c %c %c\n", a, c, b);
		}
		else if(a>b) {
			if(c>a) printf("%c %c %c\n", b, a, c);
			else if(b>c) printf("%c %c %c\n", c, b, a);
			else printf("%c %c %c\n", b, c, a);
		}
		else {
            if(c>a) printf("%c %c %c\n", c, b, a);
            else printf("%c %c %c\n", b, a, c);
		}
		getchar();
	}
	return 0;
}
