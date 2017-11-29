//竖式
#include <stdio.h>
#include <string.h>

int main()
{
	int abc, de;
	int x, y, z, i, k, flag;
	char s[100], r[20];
	scanf("%s", s);
	k = 0;
	for(abc=111;abc<=999;abc++){
		for(de=11;de<=99;de++){
			x = abc*(de%10);
			y = abc*(de/10);
			z = abc*de;
			sprintf(r, "%d%d%d%d%d", abc, de, x, y, z);
			flag = 1;
			for(i=0;r[i]!='\0';i++){
				if(strchr(s,r[i])==NULL){
                    flag = 0;
                    break;
				}
			}
			if(flag){
                k++;
                printf("<%d>\n", k);
                printf("%5d\nX%4d\n-----\n%5d\n%-5d\n-----\n%d\n", abc, de, x, y, z);
			}
		}
	}
	printf("The number of solutions = %d\n", k);
	return 0;
}
