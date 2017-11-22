//Let the Balloon Rise
//另一实现方法AC
#include <stdio.h>
#include <string.h>
int main()
{
	int n, i, j, popest, flag;
	char a[1000][16];
	int b[1000] = {0};
	while(scanf("%d", &n)==1&&n){
		getchar();
		popest = 0;
		for(i=0;i<n;i++){
            if(i){
                b[i]=0;
            }
            else{
                b[0] = 1;
            }
			gets(a[i]);
			flag = 1;
			for(j=0;j<i;j++){
				if(!strcmp(a[j], a[i])){
					b[j]++;
					popest = b[popest]>=b[j]?popest:j;
					flag = 0;
					break;
				}
			}
			if(flag&&i){
                b[i]++;
			}
		}
		puts(a[popest]);
	}
	return 0;
}


//重写 11/12 18点51分--19点36分 ---- AC!!!!
#include <stdio.h>
#include <string.h>

int main()
{
	int n, i, j, m, flag, popest;
	char a[1000][16], b[1000][16];
	int c[1000];
	while(scanf("%d", &n)==1&&n>0&&n<=1000){
		getchar();
		for(i=0;i<n;i++){
			gets(a[i]);
			if(!i){
				strcpy(b[0], a[0]);
				c[0] = 1;
				m = 1;
				popest = 0;
			}
			else{
				flag = 0;
				for(j=0;j<m;j++){
					if(!strcmp(a[i],b[j])){
						c[j]++;
						popest = c[popest]>=c[j]?popest:j;
						flag = 1;
						break;
					}
				}
				if(!flag){
					strcpy(b[m],a[i]);
					c[m] = 1;
					m++;
				}
			}
		}
		puts(b[popest]);
	}
	return 0;
}

//还存在一些小问题
#include <stdio.h>
#include <string.h>

int main()
{
	int n, t, popest, i, j, flag;
	char a[1001][16], col[101][16];
	int b[1001];
	while(scanf("%d", &n)==1&&n>0&&n<=1000){
        for(i=1;i<=n;i++){
            scanf("%s", a[i]);
        }
        strcpy(col[1], a[1]);
        b[1] = 1;
        t = 1;
        popest = 1;
        for(i=2;i<=n;i++){
            flag = 0;
            for(j=1;j<=t;j++){
                if(!strcmp(a[i],col[j])){
                    b[j]++;
                    if(b[j]>b[popest]){
                        popest = j;
                    }
                    flag = 1;
                    break;
                }
            }
            if(!flag){
                t++;
                strcpy(col[t], a[j]);
                b[t] = 1;
            }
        }
        printf("%s\n", col[popest]);
	}
	return 0;
}



//不可行，，得再改
#include <stdio.h>
#include <string.h>

int main()
{
	int n, t, popest, i, flag;
	char a[1001][20];
	int b[1001];
	while(scanf("%d", &n)==1){
		t=0;
		while(n--){
			if(!t){
				scanf("%s", a[1]);
				b[1] = 1;
				popest = 1;
				t++;
			}
			else{
				scanf("%s", a[0]);
				flag = 0;
				for(i=1;i<=t;i++){
        	if(!strcmp(a[0], a[i])){
	        	b[i]++;
          	if(b[popest]>b[i]){
            	popest = i;
          	}
          	flag = 1;
           	break;
          }
				}
				if(!flag){
       		t++;
          strcpy(a[t], a[0]);
          b[t] = 1;
				}
			}
		}
		printf("%s\n", a[popest]);
	}
	return 0;
}





/*不能实现
//mess

#include <stdio.h>
#include <string.h>

int exist(char *a[], int t, *s)
{
	int i;
	for(i=1;i<=t;i++){
		if(strcmp(*a[i], *s)){
			return i;
		}
	}
	return 0;
}

int main()
{
	int n, t, k, popest;
	char *a[1001];
	char *s;
	int b[1001]={0};
	while(scanf("%d", &n)==1&&n>0&&n<=1000){
		t = 0;
		while(n--){
			if(!t){
				scanf("%s", *a[1]);
				b[1] = 1;
				popest = t = 1;
			}
			else{
				scanf("%s", *s);
				k = exist(*a[], t, s);
				if(k){
					b[k]++;
					if(b[k]>b[popest]){
						popest = k;
					}
				}
				else{
					t++;
					strcpy(*a[t], s);
					b[t] = 1;
				}
			}
		}
		printf("%s", *a[popest]);
	}
	return 0;
}
