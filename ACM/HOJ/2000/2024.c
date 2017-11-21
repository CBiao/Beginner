//C语言合法标识符
//重写AC
#include <stdio.h>
#include <ctype.h>
int main()
{
    int n, i, flag;
    char a[51];
    while(scanf("%d", &n)==1){
        getchar();
        while(n--){
            gets(a);
            if(isalpha(a[0])||a[0]==95){
                flag = 1;
                for(i=1;a[i]!='\0';i++){
                    if(!(isalnum(a[i])||a[i]==95)){
                        printf("no\n");
                        flag = 0;
                        break;
                    }
                }
                if(flag){
                    printf("yes\n");
                }

            }
            else{
                printf("no\n");
            }
        }
    }
    return 0;
}




/*仍然WA
#include <stdio.h>

int main()
{
	char a[50];
	int n, i, flag;
	while(scanf("%d", &n)==1){
		while(n--){
			getchar();
			gets(a);
			if(a[0]=='_'||a[0]>='A'&&a[0]<='z'){
				flag = 1;
				for(i=1;a[i]!='\0';i++){
					if(!(a[i]=='_'||a[i]>='0'&&a[i]<='9'||a[i]>='A'&&a[i]<='z')){
						flag = 0;
						break;
					}
				}
			}
			else{
                flag = 0;
			}
			if(flag)	printf("yes\n");
			else printf("no\n");
		}
	}
}















/*改 当a[0]为'\0'未考虑
#include <stdio.h>
#include <ctype.h>

int main()
{
	char a[51];
	int n, i, flag;
	while(scanf("%d", &n)){
		while(n){
            getchar();
			gets(a);
			flag = 1;
			for(i=0;a[i]!='\0';i++){
				if(!i){
					if(a[0]!='_'&&!isalpha(a[0])){
						flag = 0;
						break;
					}
				}
				else{
					if(!isalnum(a[i])&&a[i]!='_'){
						flag = 0;
						break;
					}
				}
			}
			if(flag){
				printf("yes\n");
			}
			else{
				printf("no\n");
			}
			n--;
		}
	}
	return 0;
}
