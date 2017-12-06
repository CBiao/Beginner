//An easy problem
#include <stdio.h>

int f(char a)
{
	if(a<='Z') return a - 'A' + 1;
	else return 'a' - a -1;
}

int main()
{
	char x;
	int y, n;
	while(scanf("%d", &n)==1){
        getchar();
		while(n--){
			scanf("%c %d", &x, &y);
			printf("%d\n", y+f(x));
            getchar();
		}
	}
	return 0;
}
