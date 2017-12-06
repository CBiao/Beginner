//Picture
#include <stdio.h>

void print(char a, char b,int n)
{
	printf("%c", b);
	while(n--){
		printf("%c", a);
	}
	printf("%c\n", b);
}

int main()
{
	int n, m, i;
	while(scanf("%d %d", &n, &m)==2){
		print('-', '+', n);
		for(i=0;i<m;i++){
			print(' ', '|', n);
		}
		print('-', '+', n);
		putchar('\n');
	}
	return 0;
}
