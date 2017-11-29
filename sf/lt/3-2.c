#include <stdio.h>

int main()
{
    int i;
	char a[] = "1234567890-=qwertyuiop[]\\`asdfghjkl;'zxcvbnm,./";
	char c;
	while((c=getchar())!=EOF){
        for(i=0;a[i]!='\0';i++){
            if(c==a[i]){
                printf("%c", a[i-1]);
                break;
            }
        }
	}
	return 0;
}
