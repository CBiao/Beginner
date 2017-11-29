#include <stdio.h>

void delete(char s[], char a)
{
	int i, k;
	char b[1000];
	k = 0;
	for(i=0;s[i]!='\0';i++){
		if(s[i]!=a){
			b[k] = s[i];
			k++;
		}
	}
	for(i=0;b[i]!='\0';i++){
		s[i] = b[i];
	}
	s[k] = '\0';
}

int main()
{
	char s[1000], a;
	gets(s);
	scanf("%c", &a);
	delete(s, a);
	puts(s);
	return 0;
}
