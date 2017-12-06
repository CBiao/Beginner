//Train Problem I
#include <stdio.h>
#include <string.h>
int main()
{
	char a[10], b[10], c;
	int n, k, l, i;
	while(scanf("%d", &n)==1){
		for(i=0;i<=9;i++){
			a[i] = '\0';
		}
		k=0;
		scanf("%s", b);
		for(i=1;i<=n;i++){
			c = getchar();
			if(strchr(a,c)!=NULL){
				if(a[k]==c){
					a[k] = '\0';
					printf("out\n", );
					k--;
				}
				else{

				}
			}
		}

	}
	return 0;
}
