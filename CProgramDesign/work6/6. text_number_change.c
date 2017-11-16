#include <stdio.h>

int main()
{
	int i;
	int num=0;
	char s[9];
	scanf("%s", s);	//gets(s);
	for(i=0;s[i]!='\0';i++)
		if(s[i]>='0'&&s[i]<='9')
		{
			num = num*10+s[i]-'0';
		}
		else
		{
			printf("Date entry error!\n");
			printf("Press any key to end the program......");
			getchar();
			getchar();
		}
	printf("num=%d\n", num);
	return 0;
}
