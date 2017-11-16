//Digital Roots



//可运行  但显示AW
//题目出错  去掉n个输入限制可AC
#include <stdio.h>
#include <string.h>

int main()
{
	char s1[10000], s2[10000];
	//int n;
	int i, j, len;
	//scanf("%d", &n);
	//while(n--){
		/*if*/while(~scanf("%s", &s1)&&s1[0]!='0'){
            do{
            len = 0;
            for(i=0; s1[i]!='\0'; i++){
                s2[i] = '0';
                s2[0]+=s1[i]-'0';
                j = 0;
                while(s2[j]>'9'){
                    if(j==len){
                        len++;
                    }
                    s2[j+1] += 1;
                    s2[j] -= 10;
                    j++;
                }
            }
            for(i=0; i<=len; i++){
                s1[i]=s2[len-i];
            }
            s1[len+1]='\0';
            }while(len);
            printf("%d\n", s1[0]-'0');
		}
	}

	return 0;
}



//9余数定理   还有些不能理解  数学不好吧
/*
#include<stdio.h>
#include<string.h>
char a[10010];
int main()
{
	int n;
	while(~scanf("%s",a),strcmp(a,"0"))
	{
		int sum=0;
		int len=strlen(a);
		for(int i=0;i<len;++i)
		sum+=a[i]-'0';
		printf("%d\n",(sum-1)%9+1);
	}
	return 0;
}
*/


//陈宇龙：如果是大数，那么对其处理一次之后便不是大数。
/*
#include<stdio.h>
#include<string.h>

int main()
{
    int i;
    char n[1005];
    while(scanf("%s",n) != EOF && n[0] != '0'){
        int sum = 0;
        int length = strlen(n);
        for(i = 0;i < length; i++){
            sum += n[i] - '0';
        }
        int temp = sum;
        while(temp > 9){
            sum = 0;
            while(temp > 9){
                sum += temp%10;
                temp /= 10;
            }
            sum += temp;
            if(sum > 9)
                temp = sum;
        }
        printf("%d\n",sum);
    }
    return 0;
}
*/








/*都不可以  不能做到大的数据的计算
#include <stdio.h>

int sum(int n)
{
	int s = 0;
	while(n){
		s += n%10;
		n /= 10;
	}
	return s;
}


int main()
{
	int n;
	while(1){
        scanf("%d", &n);
        if(!n){
            break;
        }
        else{
            while(n>=10){
                n = sum(n);
            }
            printf("%d\n", n);
        }
	}
	return 0;
}





#include <stdio.h>

int sum(int n)
{
	int s = 0;
	while(n){
		s += n%10;
		n /= 10;
	}
	return s;
}

void root(int n)
{
    while(n>=10){
		n = sum(n);
	}
	printf("%d\n", n);
}

int main()
{
	int n=1;
	while(1){
        scanf("%d", &n);
        if(!n){
            break;
        }
        else{
            root(n);
        }
	}
	return 0;
}
*/
