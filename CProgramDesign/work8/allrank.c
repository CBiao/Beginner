#include <stdio.h>
void pr(char a[], int x, int y);
int main()
{
	char a[10];
	int n, i;
	while(scanf("%d", &n)==1){
        getchar();
		for(i=0;i<n;i++){
			scanf("%c", &a[i]);
		}
		pr(a, 0, n);
	}
	return 0;
}

void pr(char a[],int x, int y)
{
	int i;
	char t;
	if(x+1==y){
        for(i=0;i<y;i++){
            printf("%c", a[i]);
        }
        printf("\n");
        return;
	}
	for(i=x;i<y;i++){
        t = a[i];
        a[i] = a[x];
        a[x] = t;
        pr(a, x+1, y);
        t = a[i];
        a[i] = a[x];
        a[x] = t;
	}
}
