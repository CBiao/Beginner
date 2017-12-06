//Rank
#include <stdio.h>
#include <string.h>
int main()
{
	int a, b, c[1000], t, fs, i, j, temp;
    while(scanf("%d", &a)==1){
        t = 0;
        while(scanf("%d %d", &b, &c[t])==2&&b){
            if(b == a) fs = c[t];
            t++;
        }
        for(i=0;i<t-1;i++){
            for(j=0;j<t-i-1;j++){
                if(c[j]>c[j+1]){
                    temp = c[j];
                    c[j] = c[j+1];
                    c[j+1] = temp;
                }
            }
        }
        for(i=0;i<t;i++){
            if(c[i]==fs) {
                printf("%d\n", i+1);
                break;
            }
        }
    }
	return 0;
}
