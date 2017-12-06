//A + B Again
#include <stdio.h>
int main()
{
	long long a, b, c;
	while(scanf("%llx %llx", &a, &b)==2){
        c = a+b;
        if(c>=0) printf("%llX\n", c);
        else printf("-%llX\n", -c);
	}
	return 0;
}


//WA
#include <stdio.h>
#include <ctype.h>
int ten(char a[])
{
	int i=1, sum = 0, flag = 1;
	if(a[0]=='+');
	else if(a[0]=='-') flag = -1;
	else i =0;
	for(;a[i]!='\0';i++){
		if(isalpha(a[i])){
			sum = sum*16 + a[i] - 'A' +10;
		}
		else{
			sum = sum*16 + a[i] - '0';
		}
	}
	return flag*sum;
}

int main()
{
	char a[20], b[20];
	int c;
	while(scanf("%s %s", a, b)==2){
        c = ten(a)+ten(b);
		if(c>=0)printf("%X\n", c);
		else printf("-%X\n", -c);
	}
	return 0;
}
