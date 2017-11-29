#include <stdio.h>
#include <string.h>
#include <time.h>
int main()
{
    int n, tot, x, y;
    int a[100][100];
    if(scanf("%d", &n)==1){
        memset(a, 0, sizeof(a));
        x = 0;
        y = n-1;
        tot = a[x][y] = 1;
        while(tot<n*n){
            while(x+1<n&&!a[x+1][y])    a[++x][y] = ++tot;
            while(y-1>=0&&!a[x][y-1])   a[x][--y] = ++tot;
            while(x-1>=0&&!a[x-1][y])   a[--x][y] = ++tot;
            while(!a[x][y+1])           a[x][++y] = ++tot;
        }
        for(x=0;x<n;x++){
            for(y=0;y<n;y++){
                if(y)   printf(" ");
                printf("%03d", a[x][y]);
            }
            printf("\n");
        }
        printf("Time:%.6f", (double)clock()/CLOCKS_PER_SEC);
    }
    return 0;
}
