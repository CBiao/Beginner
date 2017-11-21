//A + B Problem II

//AC！！！！！！--16：43
#include <stdio.h>
#include <string.h>

char *sum(char a[], char b[])
{
    char d[1000]={'\0'}, e[1000]={'\0'};
    strcpy(d,a);
    strcpy(e,b);
	int lend = strlen(d), lene = strlen(e);
	int i;
	if(lend<lene)
		return sum(e, d);
	for(i=1;i<=lene;i++){
		d[lend-i]+=e[lene-i]-'0';
	}
	for(i=lend-1;i>0;i--){
		if(d[i]>='0'+10){
			d[i] -= 10;
			d[i-1] +=1;
		}
	}
	if(d[0]>=10+'0'){
        e[0] = '1';
        for(i=0;i<lend;i++){
            if(i==0){
                e[1]=d[0]-10;
            }
            else{
                e[i+1]=d[i];
            }
        }
        e[i+1]='\0';
        return e;
	}
	return d;
}

int main()
{
	int t, i;
	char a[1000]={'\0'}, b[1000]={'\0'},c[1000] = {'\0'};
	if(scanf("%d", &t)==1&&t>=1&&t<=20){
		for(i=1;i<=t;i++){
			scanf("%s %s", a, b);
			strcpy(c,sum(a,b));
            printf("Case %d:\n", i);
			printf("%s + %s = %s\n", a, b, c);
			if(i!=t)
                printf("\n");
		}
	}
	return 0;
}



//11/16 14：43再战--16:07  程序已经实现，但c99编译问题依然存在
/*
#include <stdio.h>
#include <string.h>

char *sum(char a[], char b[])
{
    char d[1000], e[1000];
    strcpy(d,a);
    strcpy(e,b);
	int lend = strlen(d), lene = strlen(e);
	int i;
	if(lend<lene)
		return sum(e, d);
	for(i=1;i<=lene;i++){
		d[lend-i]+=e[lene-i]-'0';
	}
	for(i=lend-1;i>0;i--){
		if(d[i]>='0'+10){
			d[i] -= 10;
			d[i-1] +=1;
		}
	}
	if(d[0]>=10+'0'){
        e[0] = '1';
        for(i=0;i<lend;i++){
            if(i==0){
                e[1]=d[0]-10;
            }
            else{
                e[i+1]=d[i];
            }
        }
        e[i+1]='\0';
        return e;
	}
	return d;
}

int main()
{
	int t, i;
	char a[1000]={}, b[1000]={};
	if(scanf("%d", &t)==1&&t>=1&&t<=20){
		for(i=1;i<=t;i++){
			scanf("%s %s", a, b);
            printf("Case %d:\n", i);
			printf("%s + %s = %s\n", a, b, sum(a,b));
			if(i!=t)
                printf("\n");
		}
	}
	return 0;
}








/* 仍不可行  暂时放弃  11/14 18：57
讨论有C
时间充裕时再战
#include <stdio.h>
#include <string.h>

char *sum(char *c, char *d)
{
	int i;
	int lenc = strlen(c), lend = strlen(d);
	if(lenc>lend){
		for(i=1;i<=lend;i++){
			c[lenc-i]+=d[lend-i]-'0';
		}
		for(i=lenc-1;i>0;i--){
			if(c[i]-'0'>=10){
				c[i]-=10;
				c[i-1]+=1;
			}
		}
		if(c[0]-'0'>=10){
            for(i=lenc;i>1;i--){
                c[i]=c[i-1];
            }
            c[1]=c[0]-10;
            c[0]='1';
        }
	}
	else{
		return sum(d,c);
	}
	return c;
}

int main()
{
	int i, t;
	char a[1000]={}, b[1000]={};
	scanf("%d", &t);
	for(i=1;i<=t;i++){
		scanf("%s %s", a, b);
		printf("%s + %s = %s\n", a, b, sum(a,b));
	}
	return 0;
}




/* sum函数存在问题  思路没问题 尝试换个方法AC；
#include <stdio.h>
#include <string.h>

char *change(char *s)
{
	int i;
	char ch[1000]={};
	int len = strlen(s);
	for(i=0;i<len;i++){
        ch[i]=s[len-i-1];
	}
	return ch;
}

char *sum(char *a, char*b)
{
    int i;
	char c[1000] = {0};
	int lenmax = strlen(a);
	if(strlen(b)>lenmax) lenmax = strlen(b);
	strcpy(a, change(a));
	strcpy(b, change(b));
	for(i=0;i<lenmax;i++){
		if(a[i]+b[i]-'0'-'0'>=10){
			c[i+1]='1';
			c[i]+=a[i]+b[i]-'0'-'0';
		}
		else{
			c[i]+=a[i]+b[i]-'0'-'0';
		}
	}
	return change(c);
}

int main()
{
	int t, i;
	char a[1000]={}, b[1000]={};
	scanf("%d", &t);
	for(i=1; i<=t; i++){
		scanf("%s %s", a, b);
		printf("Case%d:", i);
		printf("%s + %s = %s\n", change(a), change(b), sum(a, b));
		if(i!=t) printf("\n");
	}
	return 0;
}




/* 未看清题目 整数非常大
#include <stdio.h>

int main()
{
	int t, a, b, i;
	scanf("%d", &t);
	for(i=1;i<=t;i++){
		scanf("%d %d", &a, &b);
		printf("Case%d:\n", i);
		printf("%d + %d = %d\n", a, b, a+b);
		if(i!=t) printf("\n");
	}
	return 0;
}
*/
