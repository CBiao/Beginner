//Encoding
#include <stdio.h>

int main()
{
	int n, k, i;
	char a[10001], s;
	scanf("%d", &n);
	while(n--){
		scanf("%s", a);
		s = a[0];
		k = 1;
		for(i=1;a[i]!='\0';i++){
			if(a[i-1]==a[i])	k++;
			else{
				if(k==1)	printf("%c", a[i-1]);
				else	printf("%d%c", k, a[i-1]);
				s = a[i];
				k = 1;
			}
		}
		if(k==1)	printf("%c\n", a[i-1]);
        else	printf("%d%c\n", k, a[i-1]);
	}
	return 0;
}
