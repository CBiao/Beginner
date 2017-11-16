#include <stdio.h>

int chick(char);

int main()
{
	int i, sign=1;
	char s[33];
	printf("请输入一个字符串作为标识符。");
	printf("标识符由字母、数字和下划线组成\n");
	gets(s);
	if((s[0]>='A'&&s[0]<='z')||s[0]=='_')
	{
		for(i=1;s[i]!='\0';i++)
		{
			if(!chick(s[i]))
			{
				printf("标识符命名错误\n");
				printf("标识符由字母、数字和下划线组成\n");
				sign = 0;
				break;
			}
		}
		if(sign)
			printf("标识符命名成功\n%s",s);
	}
	else
		printf("标识符命名错误，第一位必须是字母或者下划线\n");

	return 0;
}

int chick(char ch)
{
	if((ch>='0'&&ch<='9')||(ch>='A'&&ch<='z')||ch=='_')
		return 1;
	else
		return 0;
}
