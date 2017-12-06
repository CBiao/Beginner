//WERTYU, UVa10082
#include <stdio.h>

int main()
{
  int i;
	char a[] = "1234567890-=QWERTYUIOP[]\\`ASDFGHJKL;'ZXCVBNM,./";
	char c;
	while((c=getchar())!=EOF){
        for(i=0;a[i]&&a[i]!=c;i++);
        if(a[i])printf("%c", a[i-1]);
        else printf("%c", c);
	}
	return 0;
}
